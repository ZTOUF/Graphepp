#ifndef CGRAPH_H
#define CGRAPH_H
#include "CGraphOrient.h"

using namespace std;
/*********************************************************************************************************************************
* CLASSE : CGraph
*********************************************************************************************************************************
* ROLE : Cette classe permet de G�rer les graphes non orient
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
template<class TArc, class TSommet> class CGraph : public CGraphOrient<TArc, TSommet> {
public:

    /*********************************************************************************************************************************
    * CGraph()
    * ****************
    * Entr�e : Aucune
    * N�cessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Cr�ation d�un graphe non orient� vide
    * *********************************************************************************************************************************/
    CGraph() {};

    /*********************************************************************************************************************************
    * CGraph(Param)
    * ****************
    * Entr�e : Param (r�f�rence vers un objet CGraph)
    * N�cessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Cr�e un graphe par copie d�un autre graphe
    * *********************************************************************************************************************************/
    CGraph(CGraph& Param) : CGraphOrient<TArc, TSommet>(Param) {}

    /*********************************************************************************************************************************
    * GROAjouterArc2(uiIdDep, uiIdArr)
    * ****************
    * Entr�e : uiIdDep (unsigned int), uiIdArr (unsigned int)
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Ajoute deux arcs (aller et retour) pour mod�liser un arc non orient�
    * *********************************************************************************************************************************/
    virtual void GROAjouterArc2(unsigned int uiIdDep, unsigned int uiIdArr);

    /*********************************************************************************************************************************
    * GROSupprimerArc(uiSomDep, uiSomArr)
    * ****************
    * Entr�e : uiSomDep, uiSomArr (unsigned int)
    * N�cessite : L�arc doit exister dans les deux sens
    * Sortie : Aucune
    * Entra�ne : Supprime les deux arcs correspondant � un arc non orient�
    * *********************************************************************************************************************************/
    virtual void GROSupprimerArc(unsigned int uiSomDep, unsigned int uiSomArr);

    /*********************************************************************************************************************************
    * GROModifierArc(uiSomDep, uiSomArr, uiNewDep, uiNewArr)
    * ****************
    * Entr�e : uiSomDep, uiSomArr, uiNewDep, uiNewArr (unsigned int)
    * N�cessite : Rien
    * Sortie : Aucune
    * Entra�ne : Modifie les deux arcs d�un arc non orient�
    * *********************************************************************************************************************************/
    virtual void GROModifierArc(unsigned int uiSomDep, unsigned int uiSomArr, unsigned int uiNewDep, unsigned int uiNewArr);
};
#include "CGraph.th"
#endif //CGRAPH_H
