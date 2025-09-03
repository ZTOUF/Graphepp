#ifndef CCONSOLEINTELLIGENTE_H
#define CCONSOLEINTELLIGENTE_H
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include "CGraphOrient.h"
#include "CArc.h"
#include "CSommet.h"
#include "CException.h"
#include "CGraph.h"
using namespace std;

/*********************************************************************************************************************************
* CLASSE : CConsoleIntelligente
*********************************************************************************************************************************
* ROLE : Cette classe permet de G?rer la console de notre librairie de fa?on intelligente
*********************************************************************************************************************************
* VERSION : 1.0
* AUTEUR : El_hatri Ayoub, Atouf Yahya
* DATE : 03/2025
*********************************************************************************************************************************/
class CConsoleIntelligente {
private:
    unordered_map<string, CGraphOrient<CArc, CSommet>> umCITGraphOrient;
    unordered_map<string, CGraph<CArc, CSommet>> umCITGraph;
    static int optionActuel;
    void clearScreen();
    int getRemainder(string sParam1, string sParam2) { return sParam1.size() - sParam2.size(); }
    void GetChoiceExec();
    void GetChoiceBegin();
    void GetChoiceInfo();
    void GetChoiceGraph();
    void GetChoiceText();
    void GetChoiceGraphCreate();
    void GetChoiceGraphCreateNew();
    void GetChoiceGraphCreateCopy();
    void GetChoiceGraphModify();
    void GetChoiceGraphModifyNext();
    void GetChoiceSommet();
    void GetChoiceArc();
    void GetChoiceGraphDelete();
    void GetChoiceGraphTraitement();
    void GetChoiceGraphAfficher();
    void GetChoiceGraphExport();
    void GetChoiceGraphImport();
    void GetChoiceGraphInverse();
    void GetChoiceGraphInverseNom();
    void GetChoiceSommetNom();
    void GetChoiceSommetSupprim(string sParamName);
    void GetChoiceImportNom();
    void GetChoiceArcNomModif();
    void GetChoiceArcListeSup(string sNameParam);
    void GetChoiceSommetNomNouveau();
    void GetChoiceArcNom();
    void GetChoiceSommetListe(string sNameParam);
    void GetChoiceArcListe(string sNameParam);
public:
    void CTLAjouterGraph(CGraphOrient<CArc, CSommet> GROParam, string sName = "monGraphe1");
    void CTLAjouterGraph(CGraph<CArc, CSommet> GROParam, string sName = "monGraphe1");
    void FinalConsole();
};



#endif //CCONSOLEINTELLIGENTE_H