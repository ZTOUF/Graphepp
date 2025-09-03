#ifndef CTRAITEMENT_H
#define CTRAITEMENT_H
#include "CGraphOrient.h"
#include "CGraph.h"

/*********************************************************************************************************************************
* CLASSE : CTraitement
*********************************************************************************************************************************
* ROLE : Cette classe permet de faire des op�rations et des traitements sur les graphes orient�es
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
class CTraitement {
public:
    /*********************************************************************************************************************************
         * TRTInverserGraph
         * ****************
         * Entr�e : GROParam de type CGraphOrient<TArc, TSommet>
         * Necessite : Rien
         * Sortie : Aucune
         * Entra�ne : inverser le graphe orient GROParam
         * *********************************************************************************************************************************/
    template<class TArc, class TSommet>
    CGraphOrient<TArc, TSommet> TRTInverserGraph(CGraphOrient<TArc, TSommet> GROParam);
    /*******************************************
 * TRTNbComposantsConnexes
 * ******
 * Entrée : GROParam de type CGraph<TArc, TSommet>
 * Necessite : Rien
 * Sortie : unsigned int (Naturel)
 * Entraine : Retourne le nombre des composants coneexes d'un graph non orient
 * *******************************************/
    template<class TArc, class TSommet>
    unsigned int TRTNbComposantsConnexes(CGraph<TArc, TSommet> GROParam);

};








#include "CTraitement.th"




#endif //CTRAITEMENT_H
