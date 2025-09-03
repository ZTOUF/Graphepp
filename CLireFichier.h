#ifndef CLIREFICHIER_H
#define CLIREFICHIER_H
#include <string>
#include "CGraphOrient.h"

/*********************************************************************************************************************************
* CLASSE : CLireFichier
*********************************************************************************************************************************
* ROLE : Cette classe permet de lire le fichier qui construit le graphe
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
using namespace std;
class CLireFichier {
    //Attribut
private:
    string sLIFNomFichier;
public:
    /**********************************************************************************************************************************
    *  CLireFichier()
    * ****************
    * Entr�e : Rien
    * N�cessite : Rien
    * Sortie : Rien
    * Entra�ne : instanciation de l'objet CLireFichier
    * *********************************************************************************************************************************/
    CLireFichier() { sLIFNomFichier = "/"; };
    /**********************************************************************************************************************************
    * CLireFichier
    * ****************
    * Entr�e : sNom de type String
    * N�cessite : Rien
    * Sortie : Rien
    * Entra�ne : instanciation de l'objet CLireFichier avec le nom sNom
    * *********************************************************************************************************************************/
    CLireFichier(string sNom) { sLIFNomFichier = sNom; };
    /**********************************************************************************************************************************
    * LIFLireTexte
    * ****************
    * Entr�e : sNom de type String (c'est le nom du fichier txt)
    * N�cessite : Rien
    * Sortie : CGraphOrient<CArc, CSommet>
    * Entra�ne : La lecture du fichier .txt , pour construire le Graphe a partir du fichier
    * *********************************************************************************************************************************/
    CGraphOrient<CArc, CSommet> LIFLireTexte(string sNom);
    void LIFExporterGrapheTexte(CGraphOrient<CArc, CSommet> GROParam, string sFichier);


};





#endif //CLIREFICHIER_H
