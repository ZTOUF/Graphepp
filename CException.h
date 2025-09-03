#ifndef CEXCEPTION_H
#define CEXCEPTION_H
/*********************************************************************************************************************************
* CLASSE : CException
*********************************************************************************************************************************
* ROLE : Cette classe permet de gerer les exceptions
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
class CException {
    //Attributs
private:
    unsigned int uiEXCValeur; // Valeur de l'exception
public:
    /**********************************************
    * Cexception
    * ********************************************
    * Entr�e : Aucune
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Cr�ation d'un objet de type CException
    * ***********************************************/
    CException();
    /**********************************************
    * EXCmodifierCode
    * ********************************************
    * Entr�e : Code d'erreur
    * Necessite : Aucune
    * Sortie : Aucune
    * Entra�ne : Modifier la valeur de l'exception
    * ***********************************************/
    void EXCmodifierCode(unsigned int uiCodeErreur) { uiEXCValeur = uiCodeErreur; };
    /**********************************************
    * Cexception
    * ********************************************
    * Entr�e : Aucune
    * Necessite : Aucune
    * Sortie : Code d'erreur
    * Entra�ne : renvoie la valeur de l'exception
    * ***********************************************/
    unsigned int EXCLirevaleur() { return uiEXCValeur; }


};





#endif //CEXCEPTION_H
