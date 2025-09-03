#ifndef CGRAPHORIENT_H
#define CGRAPHORIENT_H
#include "CSommet.h"
#include <unordered_map>
#include <iostream>
using namespace std;
/*********************************************************************************************************************************
* CLASSE : CGraphOrient
*********************************************************************************************************************************
* ROLE : Cette classe permet de cr�er et modifier les graphes Orient�es
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
template<class TArc, class TSommet> class CGraphOrient {
    //Attribut
private:
    vector<TArc*> pGROArc;
    unordered_map<unsigned int, TSommet*> pGROSommet;
protected:
    /**********************************************************************************************************************************
    * GROCreerArc(uiSomDep, uiSomArr)
    * ****************
    * Entr�e : uiSomDep (unsigned int), uiSomArr (unsigned int)
    * N�cessite : Rien
    * Sortie : TArc* (nouvel arc cr��)
    * Entra�ne : Cr�e dynamiquement un arc orient� entre deux sommets
    * *********************************************************************************************************************************/
    TArc* GROCreerArc(unsigned int uiSomDep, unsigned int uiSomArr);
public:
    //CONSTRUCTEURS ET DESTRUCTEURS
/*********************************************************************************************************************************
* CGraphOrient()
* ****************
* Entr�e : Aucune
* N�cessite : Aucune
* Sortie : Aucune
* Entra�ne : Initialise un graphe vide
* *********************************************************************************************************************************/
    CGraphOrient() { pGROArc.clear(), pGROSommet.clear(); };
    /*********************************************************************************************************************************
    * CGraphOrient(CGROParam)
    * ****************
    * Entr�e : CGROParam (const r�f�rence vers un graphe existant)
    * N�cessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Copie le contenu d�un graphe dans le nouveau graphe
    * *********************************************************************************************************************************/
    CGraphOrient(const CGraphOrient& CGROParam);
    /*********************************************************************************************************************************
   * ~CGraphOrient()
   * ****************
   * Entr�e : Aucune
   * N�cessite : Aucune
   * Sortie : Aucune
   * Entra�ne : Lib�re la m�moire (arcs et sommets)
   **********************************************************************************************************************************/
    ~CGraphOrient();
    /*********************************************************************************************************************************
    * operator=(CGROParam)
    * ****************
    * Entr�e : CGROParam (const r�f�rence vers un graphe existant)
    * N�cessite : Aucune
    * Sortie : CGraphOrient&
    * Entra�ne : Affecte un graphe � un autre
    **********************************************************************************************************************************/
    CGraphOrient& operator=(const CGraphOrient& CGROParam);
    /*********************************************************************************************************************************
     * GROGetSommet()
     * ****************
     * Entr�e : Aucune
     * N�cessite : Aucune
     * Sortie : vector<unsigned int>
     * Entra�ne : Renvoie la liste des identifiants des sommets
     * *********************************************************************************************************************************/
    vector<unsigned int> GROGetSommet();
    /*********************************************************************************************************************************
    * GROAjouterArc(pArc)
    * ****************
    * Entr�e : pArc (r�f�rence vers un arc existant)
    * N�cessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Ajoute un arc d�j� cr�� dans le graphe
    **********************************************************************************************************************************/
    void GROAjouterArc(CArc& pArc);
    /*********************************************************************************************************************************
    * GROAjouterArc2(uiIdDep, uiIdArr)
    * ****************
    * Entr�e : uiIdDep (unsigned int), uiIdArr (unsigned int)
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Cr�e et ajoute un arc entre deux sommets
    **********************************************************************************************************************************/
    virtual void GROAjouterArc2(unsigned int uiIdDep, unsigned int uiIdArr);
    /*********************************************************************************************************************************
   * GROExisteSommet(uiIdSommet)
   * ****************
   * Entr�e : uiIdSommet (unsigned int)
   * N�cessite : Aucune
   * Sortie : bool
   * Entra�ne : V�rifie si un sommet est pr�sent dans le graphe
   **********************************************************************************************************************************/
    bool GROExisteSommet(unsigned int uiIdSommet);
    /*********************************************************************************************************************************
    * GROVerifArcExist(uiSomDep, uiSomArr)
    * ****************
    * Entr�e : uiSomDep, uiSomArr (unsigned int)
    * N�cessite : Aucune
    * Sortie : bool
    * Entra�ne : V�rifie si un arc existe entre deux sommets
    * *********************************************************************************************************************************/
    bool GROVerifArcExist(unsigned int uiSomDep, unsigned int uiSomArr);
    /*********************************************************************************************************************************
    * GROSupprimerArc(uiSomDep, uiSomArr)
    * ****************
    * Entr�e : uiSomDep, uiSomArr (unsigned int)
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Supprime un arc existant entre deux sommets
    * *********************************************************************************************************************************/
    virtual void GROSupprimerArc(unsigned int uiSomDep, unsigned int uiSomArr);
    /*********************************************************************************************************************************
    * GROAjouterSommet(uiSomID)
    * ****************
    * Entr�e : uiSomID (unsigned int)
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Ajoute un nouveau sommet dans le graphe
    **********************************************************************************************************************************/
    virtual void GROAjouterSommet(unsigned int uiSomID);
    /*********************************************************************************************************************************
   * GROModifSommet(uiSomID, uiNouvID)
   * ****************
   * Entr�e : uiSomID, uiNouvID (unsigned int)
   * N�cessite : Rien
   * Sortie : Aucune
   * Entra�ne : Change l�identifiant d�un sommet
   * *********************************************************************************************************************************/
    void GROModifSommet(unsigned int uiSomID, unsigned int uiNouvID);

    /*********************************************************************************************************************************
    * GROSupprimmerSommet(uiSomID)
    * ****************
    * Entr�e : uiSomID (unsigned int)
    * N�cessite :Rien
    * Sortie : Aucune
    * Entra�ne : Supprime un sommet et ses arcs associ�s
    * *********************************************************************************************************************************/
    void GROSupprimmerSommet(unsigned int uiSomID);
    /*********************************************************************************************************************************
    * GROGetArcs()
    * ****************
    * Entr�e : Aucune
    * N�cessite : Aucune
    * Sortie : vector<pair<unsigned int, unsigned int>>
    * Entra�ne : Renvoie la liste des arcs du graphe
    **********************************************************************************************************************************/
    vector<pair<unsigned int, unsigned int>> GROGetArcs() const;
    /*********************************************************************************************************************************
    * GROModifierArc(uiSomDep, uiSomArr, uiNewDep, uiNewArr)
    * ****************
    * Entr�e : anciens et nouveaux identifiants des extr�mit�s
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Modifie un arc existant
    **********************************************************************************************************************************/
    virtual void GROModifierArc(unsigned int uiSomDep, unsigned int uiSomArr, unsigned int uiNewDep, unsigned int uiNewArr);
    /*********************************************************************************************************************************
    * GROAfficherGraphe()
    * ****************
    * Entr�e : Aucune
    * N�cessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Affiche les sommets et arcs du graphe
    * *********************************************************************************************************************************/
    void GROAfficherGraphe();
    // Pour Les Developpeurs //
    void GROAfficherSommetsArcs() const;

    /****************
        * GROInfoGraphe()
        * ****************
        * Entr�e : Aucune
        * Necessite : Aucune
        * Sortie : String (Chaine de caract�re)
        * Entra�ne : Lis les infos du Graphes (Sommets, Arcs...)
        * *****************/
    string GROInfoGraphe();
};
#include "CGraphOrient.th"
#endif //CGRAPHORIENT_H
