#ifndef CARC_H
#define CARC_H
/*********************************************************************************************************************************
* CLASSE : CArc
*********************************************************************************************************************************
* ROLE : Cette classe permet de cr�er et modifier les arcs li�s aux sommets
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
class CArc
{
	//ATTRIBUTS
private:
	unsigned int uiARCSommetDepart;
	unsigned int uiARCSommetArrive;



	//CONSTRUCTEURS ET DESTRUCTEURS
public:
	/*****************************************************************************************
	* CArc()
	* ****************
	* Entr�e : Aucune
	* Necessite : Aucune
	* Sortie : Aucune
	* Entra�ne : Cr�ation d'un objet de type CArc
	* ******************************************************************************************/
	CArc() { uiARCSommetDepart = 0; uiARCSommetArrive = 0; };
	/*****************************************************************************************
	* CArc (const CArc& ARCParam)
	* ****************
	* Entr�e : Aucune
	* Necessite : Rien
	* Sortie : Aucune
	* Entra�ne : Recopie membre � membre d'un objet de type CArc
	* *****************************************************************************************/
	CArc(const CArc& ARCParam) { uiARCSommetDepart = ARCParam.uiARCSommetDepart; uiARCSommetArrive = ARCParam.uiARCSommetArrive; }
	/*****************************************************************************************
	* CArc(unsigned int uiParam1, unsigned int uiParam2)
	* ****************
	* Entr�e : Aucune
	* Necessite : // Arc non existant (duplication d'arc) // Arc non reeantrant (uiParam1 = uiParam2) // Les deux sommets doivent etre existant
	* Sortie : Aucune
	* Entra�ne : creation d'un arc entre les deux sommets uiParam1 et uiParam2
	* *****************************************************************************************/
	CArc(unsigned int uiParam1, unsigned int uiParam2);
	//METHODES
/*****************************************************************************************
* ARCLireSomDep()
* ****************
* Entr�e : Aucune
* Necessite : Aucune
* Sortie : L'�lement du Sommet D�part
* Entra�ne : retourne l'identifiant du sommet depart
* *****************************************************************************************/
	unsigned int ARCLireSomDep() const { return uiARCSommetDepart; }
	/*****************************************************************************************
	* ARCLireSomArr()
	* ****************
	* Entr�e : Aucune
	* Necessite : Aucune
	* Sortie : Aucune
	* Entra�ne : retourne l'identifiant du sommet arriv�
	* *****************************************************************************************/
	unsigned int ARCLireSomArr() { return uiARCSommetArrive; }
	/*****************************************************************************************
	* ARCModifSomDep
	* ****************
	* Entr�e : Aucune
	* Necessite : // Arc non existant (duplication d'arc) // Arc non reeantrant (SommeDep = SommArr) // l'existence d'uiParam
	* Sortie : Aucune
	* Entra�ne : Modifier le sommet depart
	* *****************************************************************************************/
	void ARCModifSomDep(unsigned int uiParam) { uiARCSommetDepart = uiParam; }
	/*****************************************************************************************
	* ArcModifSomArr
	* ****************
	* Entr�e : Aucune
	* Necessite :  // Arc non existant (duplication d'arc) // Arc non reeantrant (SommeArr = SommDep) // l'existence d'uiParam
	* Sortie : Aucune
	* Entra�ne : Modifier le sommet Arriv�
	* *****************************************************************************************/
	void ARCModifSomArr(unsigned int uiParam) { uiARCSommetArrive = uiParam; }
};
#endif