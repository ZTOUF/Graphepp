#include <iostream>
#include "CGraphOrient.h"
#include "CSommet.h"
#include "CArc.h"
#include "CException.h"
#include "CLireFichier.h"
#include "CGraph.h"
#include "CTraitement.h"
#include "CConsoleIntelligente.h"


using namespace std;
int main(int argc, char* argv[]) {
    try {
        CLireFichier Fichier1;
        CConsoleIntelligente ConsoleIntelligente;
        if (argc >= 2) {
            try {
                ConsoleIntelligente.CTLAjouterGraph(Fichier1.LIFLireTexte(argv[1]));
                cout << "Le fichier a ete charge avec succes" << endl;
            }
            catch (CException EXCObjet) {
                if (EXCObjet.EXCLirevaleur() == 120) {
                    cout << "Erreur, ce fichier specifie '" << argv[1] << "' est introuvable, veuillez verifier le lien." << endl;
                }
                else if (EXCObjet.EXCLirevaleur() == 140) {
                    cout << "Erreur de formatage du fichier. Veuillez suivre le format specifie dans la documentation." << endl;
                }
                else if (EXCObjet.EXCLirevaleur() == 150) {
                    cout << "Erreur, le ficier specifie est vide, veuillez le remplir." << endl;
                }
                else if (EXCObjet.EXCLirevaleur() == 155) {
                    cout << "Erreur, le nombre de sommets doit etre superieur a 0." << endl;
                }
            }
        }
        ConsoleIntelligente.FinalConsole();

        /*Veuillez saisir votre bloc de code ici, pour bien g�rer les exceptions*/
        /* -> */
        /* -> */
        /* -> */
        /* -> */ 
        /* -> */
        /* -> */
        /* -> */
        /* -> */
        /* -> */
        /* -> */
        /* -> */
        /* -> */
        /*^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ */
    }
    catch (CException EXCObjet) {
        if (EXCObjet.EXCLirevaleur() == 120) {
            cout << "Erreur, le fichier specifie est introuvable, veuillez verifier le lien.";
        }
        else if (EXCObjet.EXCLirevaleur() == 140) {
            cout << "Erreur de formatage du fichier. Veuillez suivre le format specifie dans la documentation.";
        }
        else if (EXCObjet.EXCLirevaleur() == 150) {
            cout << "Erreur, le ficier specifie est vide, veuillez le remplir.";
        }
        else if (EXCObjet.EXCLirevaleur() == 155) {
            cout << "Erreur, le nombre de sommets doit etre superieur a 0.";
        }
        if (EXCObjet.EXCLirevaleur() == 100) {
            cout << "Erreur, un arc renseigne est reentrant, cette librarie ne manipule pas des tels arcs, veuillez saisir un Arc valide.";
        }
        else if (EXCObjet.EXCLirevaleur() == 300) {
            cout << "Erreur, un sommet renseigne est inexistant, veuillez le creer ou saisir un sommet valide.";
        }
        else if (EXCObjet.EXCLirevaleur() == 400) {
            cout << "Erreur, un arc que vous cherchez a creer existe deja. Veuillez saisir d'autres identifiants.";
        }
        else if (EXCObjet.EXCLirevaleur() == 700) {
            cout << "Erreur, un arc que vous cherchez a supprimer ou modifier n'existe pas. Veuillez saisir un arc existant.";
        }
        else if (EXCObjet.EXCLirevaleur() == 400) {
            cout << "Erreur, un arc que vous cherchez a creer existe deja. Veuillez saisir d'autres identifiants.";
        }
        else if (EXCObjet.EXCLirevaleur() == 5) {
            cout << "Erreur, un sommet que vous cherchez a creer en existe deja. Veuillez saisir un autre identifiant.";
        }
    }

    return 0;
}