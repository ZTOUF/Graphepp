#ifndef CSOMMET_H
#define CSOMMET_H
#include <vector>
#include "CArc.h"
#include "CGraphOrient.h"
#include <iostream>



using namespace std;
/*********************************************************************************************************************************
* CLASSE : CSommet
*********************************************************************************************************************************
* ROLE : Cette classe permet de g�rer les sommets du graphe
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
class CSommet {
    //ATTRIBUTS
private:
    unsigned int uiSOMNum;
    vector<CArc*> pSOMArcsDep;
    vector<CArc*> pSOMArcsArr;

    //CONSTRUCTEURS ET DESTRUCTEURS
public:
    /*********************************************************************************************
        * CSommet()
        * ****************
        * Entr�e : Aucune
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : Cr�ation d'un objet de type CSommet
        * *****************************************************************************************/
    CSommet();

    /*****************************************************************************************
    * CSommet(const CSommet& SOMParam)
    * ****************
    * Entr�e : SOMParam de type const CSommet&
    * Necessite : Ne pas utiliser pour �viter les duplications de pointeurs
    * Sortie : Aucune
    * Entra�ne : Recopie membre � membre d'un objet de type CSommet
    * *****************************************************************************************/
    CSommet(const CSommet& SOMParam);

    /*****************************************************************************************
    * CSommet(unsigned int uiSOMId)
    * ****************
    * Entr�e : uiSOMId de type unsigned int
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Cr�ation d'un sommet avec l'identifiant donn�
    * *****************************************************************************************/
    explicit CSommet(unsigned int uiSOMId);

    // METHODES
        /*****************************************************************************************
        * SOMLireSommet()
        * ****************
        * Entr�e : Aucune
        * Necessite : Aucune
        * Sortie : Identifiant du sommet
        * Entra�ne : Retourne l'identifiant du sommet
        * *****************************************************************************************/
    unsigned int SOMLireSommet() { return uiSOMNum; }

    /*****************************************************************************************
    * SOMLireArcsDep()
    * ****************
    * Entr�e : Aucune
    * Necessite : Aucune
    * Sortie : R�f�rence vers le vecteur des arcs sortants
    * Entra�ne : Permet d'acc�der aux arcs de d�part
    * *****************************************************************************************/
    vector<CArc*>& SOMLireArcsDep() { return pSOMArcsDep; }

    /*****************************************************************************************
    * SOMLireArcsArr()
    * ****************
    * Entr�e : Aucune
    * Necessite : Aucune
    * Sortie : R�f�rence vers le vecteur des arcs entrants
    * Entra�ne : Permet d'acc�der aux arcs d�arriv�e
    ******************************************************************************************/
    vector<CArc*>& SOMLireArcsArr() { return pSOMArcsArr; }


    /*****************************************************************************************
    * SOMModifNum(unsigned int uiParam)
    * ****************
    * Entr�e : uiParam de type unsigned int
    * Necessite : Ne pas donner l'identifiant d'un sommet d�ja existant
    * Sortie : Aucune
    * Entra�ne : Modifie l�identifiant du sommet
    * *****************************************************************************************/
    void SOMModifNum(unsigned int uiParam);

    /*****************************************************************************************
    * SOMAjouterArcDep2(CArc* arc)
    * ****************
    * Entr�e : arc de type CArc*
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Ajoute un arc sortant au sommet
    * *****************************************************************************************/
    void SOMAjouterArcDep2(CArc* arc);

    /*****************************************************************************************
    * SOMAjouterArcArr2(CArc* arc)
    * ****************
    * Entr�e : arc de type CArc*
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Ajoute un arc entrant au sommet
    ******************************************************************************************/
    void SOMAjouterArcArr2(CArc* arc);

    /*****************************************************************************************
    * SOMSupprimerArcDep2(CArc* arc)
    * ****************
    * Entr�e : arc de type CArc*
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Supprime un arc sortant donn�
    * *****************************************************************************************/
    void SOMSupprimerArcDep2(CArc* arc);

    /*****************************************************************************************
    * SOMSupprimerArcArr2(CArc* arc)
    * ****************
    * Entr�e : arc de type CArc*
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Supprime un arc entrant donn�
    * *****************************************************************************************/
    void SOMSupprimerArcArr2(CArc* arc);


};
#endif //CSOMMET_H
