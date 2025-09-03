#include "CSommet.h"
#include "CException.h"
#include "CGraphOrient.h"

#include "CArc.h"
#include <algorithm>


using namespace std;


/*********************************************************************************************
* CSommet()
* ****************
* Entr�e : Aucune
* Necessite : Aucune
* Sortie : Aucune
* Entra�ne : Cr�ation d'un objet de type CSommet
 * *****************************************************************************************/
CSommet::CSommet() {
    pSOMArcsDep.clear();
    pSOMArcsArr.clear();

}

/*********************************************************************************************
* CSommet()
* ****************
* Entr�e : Aucune
* Necessite : Aucune
* Sortie : Aucune
* Entra�ne : Cr�ation d'un objet de type CSommet
 * *****************************************************************************************/
CSommet::CSommet(unsigned int uiSOMId) {
    pSOMArcsDep.clear();
    pSOMArcsArr.clear();
    uiSOMNum = uiSOMId;
};
/****************
        * CSommet
        * ****************
        * Entr�e : uiParam de type unsigned int
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : modification
        * *****************/
CSommet::CSommet(const CSommet& SOMParam) {
    uiSOMNum = SOMParam.uiSOMNum;
    for (auto pARC : SOMParam.pSOMArcsArr) {
        pSOMArcsArr.push_back(new CArc(*pARC));
    }
    for (auto pARC : SOMParam.pSOMArcsDep) {
        pSOMArcsDep.push_back(new CArc(*pARC));
    }
}

/****************
       * CSommet
       * ****************
       * Entr�e : uiParam de type unsigned int
       * Necessite : Aucune
       * Sortie : Aucune
       * Entra�ne : modification
       * *****************/
void CSommet::SOMModifNum(unsigned int uiParam) {
    uiSOMNum = uiParam;
}
/****************
        * CSommet
        * ****************
        * Entr�e : uiParam de type unsigned int
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : modification
        * *****************/
void CSommet::SOMAjouterArcArr2(CArc* arc) {
    pSOMArcsArr.push_back(arc);
}
/****************
        * CSommet
        * ****************
        * Entr�e : uiParam de type unsigned int
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : modification
        * *****************/
void CSommet::SOMAjouterArcDep2(CArc* arc) {
    pSOMArcsDep.push_back(arc);
}
/****************
        * CSommet
        * ****************
        * Entr�e : uiParam de type unsigned int
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : modification
        * *****************/
void CSommet::SOMSupprimerArcArr2(CArc* arc) {
    for (auto it = pSOMArcsArr.begin(); it != pSOMArcsArr.end(); ++it) {
        if (*it == arc) {
            pSOMArcsArr.erase(it);

            return;
        }
    }
}

/****************
        * CSommet
        * ****************
        * Entr�e : uiParam de type unsigned int
        * Necessite : Aucune
        * Sortie : Aucune
        * Entra�ne : modification
        * *****************/
void CSommet::SOMSupprimerArcDep2(CArc* arc) {
    for (auto it = pSOMArcsDep.begin(); it != pSOMArcsDep.end(); ++it) {
        if (*it == arc) {
            pSOMArcsDep.erase(it);
            return;
        }
    }
}









