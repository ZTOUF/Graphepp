#include "CLireFichier.h"
#include "CException.h"
#include <iostream>
#include <fstream>
#define FichierIntrouvable 120
#define ErreurFormatageFichier 140
#define FichierVide 150
#define NbSommetsErreur 155
#include <sstream>
#include <algorithm>
/**********************************************************************************************************************************
    * LIFLireTexte
    * ****************
    * Entr�e : sNom de type String (c'est le nom du fichier txt)
    * N�cessite : Rien
    * Sortie : CGraphOrient<CArc, CSommet>
    * Entra�ne : La lecture du fichier .txt , pour construire le Graphe a partir du fichier
    * *********************************************************************************************************************************/
CGraphOrient<CArc, CSommet> CLireFichier::LIFLireTexte(string sNom) {
    CGraphOrient<CArc, CSommet> pGraph;
    fstream Fichier1;
    Fichier1.open(sNom, ios::in);
    string LireTexte;
    CException EXCObjet1;
    EXCObjet1.EXCmodifierCode(FichierIntrouvable);
    CException EXCObjet2;
    EXCObjet2.EXCmodifierCode(FichierVide);
    CException EXCObjet3;
    EXCObjet3.EXCmodifierCode(ErreurFormatageFichier);
    CException EXCObjet4;
    EXCObjet4.EXCmodifierCode(NbSommetsErreur);
    if (Fichier1.is_open()) {
        if (getline(Fichier1, LireTexte)) {
            if (LireTexte.substr(0, 10) == "NBSommets=") {
                string sNbreSommets = LireTexte.substr(10, LireTexte.size());
                unsigned int uiNbreSommets = stoi(sNbreSommets);
                if (uiNbreSommets == 0 || uiNbreSommets < 0) {
                    throw EXCObjet4;
                }
                if (getline(Fichier1, LireTexte)) {
                    if (LireTexte.substr(0, 7) == "NBArcs=") {
                        string sNbreArcs = LireTexte.substr(7, LireTexte.size());
                        unsigned int uiNbreArcs = stoi(sNbreArcs);
                        if (getline(Fichier1, LireTexte)) {
                            if (LireTexte == "Sommets=[") {
                                for (int i = 0; i < uiNbreSommets; i++) {

                                    if (getline(Fichier1, LireTexte)) {
                                        if (LireTexte.substr(0, 7) == "Numero=") {
                                            int newSommet = stoi(LireTexte.substr(7, LireTexte.size()));
                                            pGraph.GROAjouterSommet(newSommet);
                                        }
                                        else {
                                            throw EXCObjet3;
                                        }
                                    }
                                    else {
                                        throw EXCObjet3;
                                    }
                                }

                            }
                            else {
                                throw EXCObjet3;
                            }
                        }
                        else {
                            throw EXCObjet3;
                        }
                        if (getline(Fichier1, LireTexte)) {
                            if (LireTexte == "]") {}
                        }
                        else {
                            throw EXCObjet3;
                        }
                        if (getline(Fichier1, LireTexte)) {

                            if (LireTexte == "Arcs=[") {
                                for (int j = 0; j < uiNbreArcs; j++) {
                                    if (getline(Fichier1, LireTexte)) {
                                        string LireTexte1;
                                        string LireTexte2;
                                        stringstream TexteStream;
                                        TexteStream << LireTexte;

                                        if (getline(TexteStream, LireTexte1, ',') && getline(TexteStream, LireTexte2, ',')) {
                                            if (LireTexte1.substr(0, 6) == "Debut=" && LireTexte2.substr(0, 5) == " Fin=") {
                                                int newArcDep = stoi(LireTexte1.substr(6, LireTexte1.size()));
                                                int newArcArr = stoi(LireTexte2.substr(5, LireTexte2.size()));
                                                pGraph.GROAjouterArc2(newArcDep, newArcArr);

                                            }
                                            else {
                                                throw EXCObjet3;
                                            }
                                        }
                                        else {
                                            throw EXCObjet3;
                                        }





                                    }
                                    else {
                                        throw EXCObjet3;
                                    }


                                }
                            }
                            else {
                                throw EXCObjet3;
                            }
                        }
                        else {
                            throw EXCObjet3;
                        }
                        if (getline(Fichier1, LireTexte)) {
                            if (LireTexte == "]") {}
                            else { throw EXCObjet3; }
                        }
                        else {
                            throw EXCObjet3;
                        }

                    }
                    else {
                        throw EXCObjet3;
                    }
                }
                else {
                    throw EXCObjet3;
                }
            }
            else {
                throw EXCObjet3;
            }
        }
        else {
            throw EXCObjet2;
        }
    }
    else {
        throw EXCObjet1;
    };
    return pGraph;
}
void CLireFichier::LIFExporterGrapheTexte(CGraphOrient<CArc, CSommet> GROParam, string sFichier) {
    fstream file;
    file.open(sFichier, ios::out);
    unsigned int nbrSom = GROParam.GROGetSommet().size();
    unsigned int nbrArcs = GROParam.GROGetArcs().size();
    CException EXCObjet1;
    EXCObjet1.EXCmodifierCode(FichierIntrouvable);
    if (file.is_open()) {
        file << ("NBSommets=" + to_string(nbrSom) + "\n");
        file << ("NBArcs=" + to_string(nbrArcs) + "\n");
        file << "Sommets=[\n";
        for (unsigned int uiSom : GROParam.GROGetSommet()) {
            file << "Numero=" + to_string(uiSom) + "\n";
        }
        file << "]\n";
        file << "Arcs=[\n";
        for (auto pair : GROParam.GROGetArcs()) {
            file << "Debut=" + to_string(pair.first) + ", Fin=" + to_string(pair.second) + "\n";
        }
        file << "]\n";
        file.close();
    }
    else {
        throw EXCObjet1;
    }
}