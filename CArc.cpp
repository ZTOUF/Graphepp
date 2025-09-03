#include "CArc.h"
/****************
* CArc
* ****************
* Entr�e : Aucune
* Necessite : // Arc non existant (duplication d'arc) // Arc non reeantrant (uiParam1 = uiParam2) // Les deux sommets doivent etre existant
* Sortie : Aucune
* Entra�ne : creation d'un arc entre les deux sommets uiParam1 et uiParam2
* *****************/
CArc::CArc(unsigned int uiParam1, unsigned int uiParam2) {
    uiARCSommetDepart = uiParam1;
    uiARCSommetArrive = uiParam2;
}

