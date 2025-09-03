#include "CConsoleIntelligente.h"

#include "CTraitement.h"
#include <algorithm>
#include "CLireFichier.h"
void CConsoleIntelligente::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void CConsoleIntelligente::GetChoiceExec() {
    string Affiche(100, '*');
    string Projet = "Bienvenue a notre Projet Graph++, cree par Ayoub Elhatri et Yahya Atouf.";
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour commencer a construire des Graphs.";
    string Option3 = "Saisir 2 si vous voulez vous plus d'infos sur le programme.";
    int remain = Affiche.size() - Projet.size();
    int remain1 = Affiche.size() - Option1.size();
    int remain2 = Affiche.size() - Option2.size();
    int remain3 = Affiche.size() - Option3.size();
    if (remain % 2 == 0) {
        string space1((remain / 2), ' ');
        string spaces((Affiche.size()) - 2, ' ');
        string space2((remain1)-4, ' ');
        string space3((remain2)-3, ' ');
        string space4((remain3)-4, ' ');
        cout << Affiche << endl;
        cout << "*" << space1 << Projet << space1 << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option1 << space2 << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option2 << space3 << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option3 << space4 << "*" << endl;
        cout << Affiche << endl;
        cout << ">>> ";
    }
    else {

        string space1((remain / 2) + 1, ' ');
        string spacek((remain / 2), ' ');
        string spaces((Affiche.size()) - 2, ' ');
        string space2((remain1)-4, ' ');
        string space3((remain2)-3, ' ');
        string space4((remain3)-4, ' ');
        cout << Affiche << endl;
        cout << "*" << space1 << Projet << spacek << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option1 << space2 << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option2 << space3 << "*" << endl;
        cout << "*" << spaces << "*" << endl;
        cout << "*  " << Option3 << space4 << "*" << endl;
        cout << Affiche << endl;
        cout << ">>> ";
    }
};

void CConsoleIntelligente::GetChoiceBegin() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour acceder au parametres de Graphes.";
    string Option3 = "Saisir 2 pour acceder au parametres des Fichiers Texte.";
    string Option4 = "Saisir -1 pour revenir au menu precedent.";
    string spaces(Affiche.size() - 2, ' ');
    string space1(getRemainder(Affiche, Option1) - 4, ' ');
    string space2(getRemainder(Affiche, Option2) - 2, ' ');
    string space3(getRemainder(Affiche, Option3) - 2, ' ');
    string space4(getRemainder(Affiche, Option4) - 3, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << spaces << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*" << spaces << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << spaces << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraph() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour creer un Graphe.";
    string Option3 = "Saisir 2 pour modifier un Graphe.";
    string Option4 = "Saisir 3 pour supprimer un Graphe.";
    string Option5 = "Saisir 4 pour traiter un Graphe.";
    string Option7 = "Saisir 5 pour afficher un Graphe.";
    string Option6 = "Saisir -1 pour revenir au menu precedent.";
    string Space((Affiche.size() / 2) - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space4(getRemainder(Space, Option4) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 2, ' ');
    string space6(getRemainder(Space, Option6) - 1, ' ');
    string space7(getRemainder(Space, Option7) - 2, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*  " << Option5 << space5 << " *" << endl;
    cout << "*" << Space << "*" << Space << " *" << endl;
    cout << "*  " << Option2 << space2 << "*" << Space << " *" << endl;
    cout << "*" << Space << "*  " << Option7 << space7 << " *" << endl;
    cout << "*  " << Option3 << space3 << "*" << Space << " *" << endl;
    cout << "*" << Space << "*" << Space << " *" << endl;
    cout << "*  " << Option4 << space4 << "*  " << Option6 << space6 << " *" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceInfo() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Projet Graph++, concue par Ayoub Elhatri et Atouf Yahya.";
    string Option3 = "Encadre par M. Tkindt Vincent, M. Sakhi Ghulam Shokouh.";
    string Option4 = "La documentation se trouve dans le rapport fournis avec le programme.";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 1, ' ');
    string space4(getRemainder(Space, Option4) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceText() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour importer un Graphe a partir d'un fichier Texte.";
    string Option3 = "Saisir 2 pour exporter un Graphe dans un fichier Texte.";
    string Option4 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space4(getRemainder(Space, Option4) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphCreate() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour creer un nouveau Graphe vierge.";
    string Option3 = "Saisir 2 pour creer un Graphe copie d'un autre.";
    string Option4 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 1, ' ');
    string space4(getRemainder(Space, Option4) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphCreateNew() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Que Souhaitez-vous appeler votre Graphe? (20 Caracteres max)";
    string Option3 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphCreateCopy() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous copier?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphModify() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous modifier?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphDelete() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous supprimer?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphTraitement() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous traiter?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphAfficher() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous afficher?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphExport() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Graphe souhaitez vous exporter?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    for (auto& [stringval, CGraphOrientval] : umCITGraphOrient) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    for (auto& [stringval, CGraphval] : umCITGraph) {
        if (stringval.size() < 20) {
            string spacestring(20 - stringval.size(), ' ');
            string StringAffiche = stringval + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
        else {
            string spaceforString(getRemainder(Affiche, stringval) - 4, ' ');
            cout << "*  " << stringval << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphModifyNext() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour acceder au parametres Sommets.";
    string Option3 = "Saisir 2 pour acceder au parametres Arcs.";
    string Option4 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2), ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space4(getRemainder(Space, Option4) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceSommet() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour  creer un Sommet.";
    string Option3 = "Saisir 2 pour modifier un Sommet.";
    string Option4 = "Saisir 3 pour supprimer un Sommet.";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space4(getRemainder(Space, Option4) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceArc() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir 1 pour  creer un Arc.";
    string Option3 = "Saisir 2 pour modifier un Arc.";
    string Option4 = "Saisir 3 pour supprimer un Arc.";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space2(getRemainder(Space, Option2) - 1, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space4(getRemainder(Space, Option4) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option2 << space2 << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*  " << Option4 << space4 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphImport() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Veuillez saisir le lien vers votre fichier Texte.";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphInverse() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Saisir 1 pour inverser le Graphe";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3) - 2, ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceGraphInverseNom() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Quel nom desirez vous donner a ce nouveau Graphe?";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceArcNom() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Veuillez renseigner l'identifiant du sommet depart et arrivee de cet Arc.";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceArcNomModif() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Veuillez renseigner le nouveau identifiant du sommet depart et arrivee de cet Arc";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}

void CConsoleIntelligente::GetChoiceSommetNom() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Quel identifiant souhaitez-vous donner a ce nouveau Sommet?";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}

void CConsoleIntelligente::GetChoiceSommetNomNouveau() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Quel identifiant souhaitez-vous donner a ce Sommet?";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceImportNom() {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option3 = "Quel nom souhaitez-vous donner a ce Graphe?";
    string Option5 = "Saisir -1 pour revenir au menu precedent";
    string Space(Affiche.size() - 2, ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option3), ' ');
    string space5(getRemainder(Space, Option5) - 1, ' ');
    cout << Affiche << endl;
    cout << "*  " << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option3 << space3 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*  " << Option5 << space5 << "*" << endl;
    cout << Affiche << endl;;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceSommetListe(string sNameParam) {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel sommet souhaitez vous modifier?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    if (umCITGraphOrient.find(sNameParam) != umCITGraphOrient.end()) {
        for (unsigned int uiSommet : umCITGraphOrient.find(sNameParam)->second.GROGetSommet()) {
            string spacestring(20 - to_string(uiSommet).size(), ' ');
            string StringAffiche = to_string(uiSommet) + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    else if (umCITGraph.find(sNameParam) != umCITGraph.end()) {
        for (unsigned int uiSommet : umCITGraph.find(sNameParam)->second.GROGetSommet()) {
            string spacestring(20 - to_string(uiSommet).size(), ' ');
            string StringAffiche = to_string(uiSommet) + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceSommetSupprim(string sNameParam) {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel sommet souhaitez vous supprimer?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    if (umCITGraphOrient.find(sNameParam) != umCITGraphOrient.end()) {
        for (unsigned int uiSommet : umCITGraphOrient.find(sNameParam)->second.GROGetSommet()) {
            string spacestring(20 - to_string(uiSommet).size(), ' ');
            string StringAffiche = to_string(uiSommet) + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    else if (umCITGraph.find(sNameParam) != umCITGraph.end()) {
        for (unsigned int uiSommet : umCITGraph.find(sNameParam)->second.GROGetSommet()) {
            string spacestring(20 - to_string(uiSommet).size(), ' ');
            string StringAffiche = to_string(uiSommet) + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceArcListe(string sNameParam) {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Arc souhaitez vous modifier??";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    if (umCITGraphOrient.find(sNameParam) != umCITGraphOrient.end()) {
        for (auto pair : umCITGraphOrient.find(sNameParam)->second.GROGetArcs()) {
            string nomArc = to_string(pair.first) + " vers " + to_string(pair.second);
            string spacestring(20 - nomArc.size(), ' ');
            string StringAffiche = nomArc + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    else if (umCITGraph.find(sNameParam) != umCITGraph.end()) {
        for (auto pair : umCITGraph.find(sNameParam)->second.GROGetArcs()) {
            string nomArc = to_string(pair.first) + " vers " + to_string(pair.second);
            string spacestring(20 - nomArc.size(), ' ');
            string StringAffiche = nomArc + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::GetChoiceArcListeSup(string sNameParam) {
    string Affiche(100, '*');
    string Option1 = "Saisir 0 pour quitter l'application.";
    string Option2 = "Saisir -1 pour revenir au menu precedent";
    string Options = "Quel Arc souhaitez vous supprimer?";
    string Space(Affiche.size() - 2, ' ');
    string SpaceOptions(getRemainder(Space, Options), ' ');
    string space1(getRemainder(Space, Option1) - 2, ' ');
    string space3(getRemainder(Space, Option2) - 1, ' ');
    cout << Affiche << endl;
    cout << "*" << Option1 << space1 << "*" << endl;
    cout << "*" << Space << "*" << endl;
    cout << "*" << Options << SpaceOptions << "*" << endl;
    if (umCITGraphOrient.find(sNameParam) != umCITGraphOrient.end()) {
        for (auto pair : umCITGraphOrient.find(sNameParam)->second.GROGetArcs()) {
            string nomArc = to_string(pair.first) + " vers " + to_string(pair.second);
            string spacestring(20 - nomArc.size(), ' ');
            string StringAffiche = nomArc + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    else if (umCITGraph.find(sNameParam) != umCITGraph.end()) {
        for (auto pair : umCITGraph.find(sNameParam)->second.GROGetArcs()) {
            string nomArc = to_string(pair.first) + " vers " + to_string(pair.second);
            string spacestring(20 - nomArc.size(), ' ');
            string StringAffiche = nomArc + spacestring;
            string spaceforString(getRemainder(Affiche, StringAffiche) - 4, ' ');
            cout << "*  " << StringAffiche << spaceforString << "*" << endl;
        }
    }
    cout << "*" << Space << "*" << endl;
    cout << "*" << Option2 << space3 << "*" << endl;
    cout << Affiche << endl;
    cout << ">>> ";
}
void CConsoleIntelligente::CTLAjouterGraph(CGraphOrient<CArc, CSommet> GROParam, string sName) {
    umCITGraphOrient[sName] = GROParam;

}
void CConsoleIntelligente::CTLAjouterGraph(CGraph<CArc, CSommet> GROParam, string sName) {
    umCITGraph[sName] = GROParam;
}


void CConsoleIntelligente::FinalConsole() {
    int iMenu = 1;
    string sErreur;
    string sGraphval;
    unsigned int iSommet;
    unsigned int iArc1;
    unsigned int iArc2;
    CLireFichier FichierImpExp;
    string sFichier;
    while (iMenu != 0) {
        if (!sErreur.empty()) {
            cout << sErreur << endl;
        }
        if (iMenu == 1) {
            GetChoiceExec();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 2;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 3;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 2) {
            GetChoiceBegin();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 1;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 4;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 5;
                sErreur.clear();
            }

            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 3) {
            GetChoiceInfo();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 1;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 4) {
            GetChoiceGraph();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 2;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 6;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 7;
                sErreur.clear();
            }
            else if (sNum == "3") {
                iMenu = 8;
                sErreur.clear();
            }
            else if (sNum == "4") {
                iMenu = 9;
                sErreur.clear();
            }
            else if (sNum == "5") {
                iMenu = 10;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 5) {
            GetChoiceText();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 2;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 12;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 11;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 6) {
            GetChoiceGraphCreate();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 4;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 13;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 14;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas,Veuillez reessayer";
            }
        }
        else if (iMenu == 7) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a modifier, veuillez commencer par en creer un.";
                iMenu = 4;
            }
            else {
                GetChoiceGraphModify();
                string sNum;
                cin >> sNum;
                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 4;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                    sGraphval = sNum;
                    iMenu = 15;
                    sErreur.clear();
                }
                else {
                    sErreur = "Erreur, Graph: " + sNum + " est introuvable ,Veuillez reessayer.";
                }
            }
        }
        else if (iMenu == 8) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a supprimer, veuillez commencer par en creer un.";
                iMenu = 4;
            }

            else {
                GetChoiceGraphDelete();
                string sNum;
                cin >> sNum;
                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 4;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end()) {
                    umCITGraphOrient.erase(sNum);
                    sErreur = "Graph " + sNum + " a ete supprime avec succes";
                    iMenu = 4;
                }
                else if (umCITGraph.find(sNum) != umCITGraph.end()) {
                    umCITGraph.erase(sNum);
                    sErreur = "Graph " + sNum + " a ete supprime avec succes";
                    iMenu = 4;
                }
                else {
                    sErreur = "Erreur, Graph: " + sNum + " est introuvable ,Veuillez reessayer.";
                }
            }
        }
        else if (iMenu == 9) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a traiter, veuillez commencer par en creer un.";
                iMenu = 4;
            }
            else {
                GetChoiceGraphTraitement();
                string sNum;
                cin >> sNum;

                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 4;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                    sGraphval = sNum;
                    iMenu = 16;
                    sErreur.clear();
                }
                else {
                    sErreur = "Erreur, Graph: " + sNum + " est introuvable ,Veuillez reessayer.";
                }
            }
        }
        else if (iMenu == 10) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a afficher, veuillez commencer par en creer un.";
                iMenu = 4;
            }
            else {
                GetChoiceGraphAfficher();
                string sNum;
                cin >> sNum;
                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 4;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end()) {
                    sErreur = umCITGraphOrient.find(sNum)->second.GROInfoGraphe();
                    iMenu = 4;
                }
                else if (umCITGraph.find(sNum) != umCITGraph.end()) {
                    sErreur = umCITGraph.find(sNum)->second.GROInfoGraphe();
                    iMenu = 4;
                }
                else {
                    sErreur = "Erreur, Graph: " + sNum + " est introuvable ,Veuillez reessayer.";
                }
            }
        }
        else if (iMenu == 11) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a exporter, veuillez commencer par en creer un.";
                iMenu = 5;
            }
            else {
                GetChoiceGraphExport();
                string sNum;
                cin >> sNum;
                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 5;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                    sGraphval = sNum;
                    iMenu = 30;
                    sErreur.clear();
                }
                else {
                    sErreur = "Erreur, Graph: " + sNum + " est introuvable ,Veuillez reessayer.";
                }
            }
        }
        else if (iMenu == 12) {
            GetChoiceGraphImport();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 5;
                sErreur.clear();
            }
            else {
                try {
                    CGraphOrient<CArc, CSommet> GRO = FichierImpExp.LIFLireTexte(sNum);
                    iMenu = 25;
                    sFichier = sNum;
                    sErreur = "Le fichier est trouve et charge avec succes.";
                }
                catch (CException EXCObjet) {
                    if (EXCObjet.EXCLirevaleur() == 120) {
                        sErreur = "Erreur, ce fichier specifie est introuvable, veuillez verifier le lien.";
                    }
                    else if (EXCObjet.EXCLirevaleur() == 140) {
                        sErreur = "Erreur de formatage du fichier. Veuillez suivre le format specifie dans la documentation.";
                    }
                    else if (EXCObjet.EXCLirevaleur() == 150) {
                        sErreur = "Erreur, le ficier specifie est vide, veuillez le remplir.";
                    }
                    else if (EXCObjet.EXCLirevaleur() == 155) {
                        sErreur = "Erreur, le nombre de sommets doit etre superieur a 0.";
                    }
                }
            }
        }
        else if (iMenu == 13) {
            GetChoiceGraphCreateNew();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 6;
                sErreur.clear();
            }
            else if (sNum.size() <= 20 && umCITGraphOrient.find(sNum) == umCITGraphOrient.end() && umCITGraph.find(sNum) == umCITGraph.end()) {
                CGraphOrient<CArc, CSommet> GRO;
                umCITGraphOrient[sNum] = GRO;
                sErreur = "Le Graphe a ete cree avec succes.";
                iMenu = 6;
            }
            else if (sNum.size() >= 20) {
                sErreur = "Erreur, le nom choisi pour le graphe est trop long (20 char max)";
            }
            else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                sErreur = "Erreur, ce nom existe deja, veuillez choisir un autre nom.";
            }
        }
        else if (iMenu == 14) {
            if (umCITGraphOrient.empty() && umCITGraph.empty()) {
                sErreur = "Vous n'avez aucun Graphe a copier, veuillez commencer par en creer un.";
                iMenu = 6;
            }
            else {
                GetChoiceGraphCreateCopy();
                string sNum;
                cin >> sNum;
                if (sNum == "0") {
                    iMenu = 0;
                    sErreur.clear();
                }
                else if (sNum == "-1") {
                    iMenu = 6;
                    sErreur.clear();
                }
                else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                    sGraphval = sNum;
                    iMenu = 18;
                    sErreur.clear();
                }
                else {
                    sErreur = "Erreur, option " + sNum + " n'existe pas, Veuillez reessayer";
                }
            }
        }
        else if (iMenu == 15) {
            GetChoiceGraphModifyNext();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 7;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 19;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 20;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas, Veuillez reessayer";
            }
        }
        else if (iMenu == 16) {
            GetChoiceGraphInverse();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 9;
                sErreur.clear();
                sGraphval.clear();
            }
            else if (sNum == "1") {
                iMenu = 17;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas, Veuillez reessayer";
            }
        }
        else if (iMenu == 17) {
            GetChoiceGraphInverseNom();
            string sNum;
            cin >> sNum;
            CTraitement trt;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 16;
                sErreur.clear();
            }
            else if (umCITGraphOrient.find(sNum) == umCITGraphOrient.end() && umCITGraph.find(sNum) == umCITGraph.end()) {
                if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                    umCITGraphOrient[sNum] = trt.TRTInverserGraph(umCITGraphOrient.find(sGraphval)->second);
                    iMenu = 4;
                    sErreur = "Le graphe a ete cree avec succes.";
                }
                else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                    umCITGraphOrient[sNum] = trt.TRTInverserGraph(umCITGraph.find(sGraphval)->second);// L� o� la m�re passe, la fille passe. L� o� la fille passe, la m�re tr�passe.
                    iMenu = 4;
                    sErreur = "Le graphe a ete cree avec succes.";
                }

            }
            else {
                sErreur = "Un Graphe ayant le nom: " + sNum + " existe deja, veuillez choisir un autre nom";
            }
        }
        else if (iMenu == 18) {
            GetChoiceGraphInverseNom();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 14;
                sErreur.clear();
            }
            else if (umCITGraphOrient.find(sNum) == umCITGraphOrient.end() && umCITGraph.find(sNum) == umCITGraph.end() && sNum.size() <= 20) {
                if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                    CGraphOrient<CArc, CSommet> GRO = umCITGraphOrient.find(sGraphval)->second;
                    umCITGraphOrient[sNum] = GRO;
                    sErreur = "Le Graphe a ete copie avec succes.";
                    iMenu = 6;
                }
                if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                    CGraph<CArc, CSommet> GRO = umCITGraph.find(sGraphval)->second;
                    umCITGraph[sNum] = GRO;
                    sErreur = "Le Graphe a ete copie avec succes.";
                    iMenu = 6;
                }
            }
            else if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end() || umCITGraph.find(sNum) != umCITGraph.end()) {
                sErreur = "Un Graphe ayant le nom: " + sNum + " existe deja, veuillez choisir un autre nom";
                iMenu = 14;
            }
            else {
                sErreur = "Erreur, le nom choisi pour le graphe est trop long (20 char max)";
            }
        }
        else if (iMenu == 19) {
            GetChoiceSommet();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 15;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 21;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 22;
                sErreur.clear();
            }
            else if (sNum == "3") {
                iMenu = 23;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas, Veuillez reessayer";
            }
        }
        else if (iMenu == 20) {
            GetChoiceArc();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 15;
                sErreur.clear();
            }
            else if (sNum == "1") {
                iMenu = 26;
                sErreur.clear();
            }
            else if (sNum == "2") {
                iMenu = 27;
                sErreur.clear();
            }
            else if (sNum == "3") {
                iMenu = 28;
                sErreur.clear();
            }
            else {
                sErreur = "Erreur, option " + sNum + " n'existe pas, Veuillez reessayer";
            }
        }
        else if (iMenu == 21) {
            GetChoiceSommetNom();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 19;
            }
            else {
                int iNum;
                try {
                    iNum = stoi(sNum);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROAjouterSommet(iNum);
                            sErreur = "Le sommet a ete ajoute avec succes.";
                            iMenu = 19;
                        }
                        else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROAjouterSommet(iNum);
                            sErreur = "Le sommet a ete ajoute avec succes.";
                            iMenu = 19;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 300) {
                            sErreur = "Le sommet existe deja, veuillez saisir un autre identifiant";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Erreur, Veuillez entrer un identifiant de sommet valide.(Unsigned int)";
                }
            }
        }
        else if (iMenu == 22) {
            GetChoiceSommetListe(sGraphval);
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 19;
                sErreur.clear();
            }
            else {
                try {
                    unsigned int iNum = stoi(sNum);
                    if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                        if (find(umCITGraphOrient.find(sGraphval)->second.GROGetSommet().begin(), umCITGraphOrient.find(sGraphval)->second.GROGetSommet().end(), iNum) == umCITGraphOrient.find(sGraphval)->second.GROGetSommet().end()) {
                            sErreur = "L'identifiant du sommet " + to_string(iNum) + " est introuvable. Veuillez resaisir un identifiant valide.";
                        }
                        else {
                            iMenu = 24;
                            iSommet = iNum;
                            sErreur.clear();
                        }
                    }
                    if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                        if (find(umCITGraph.find(sGraphval)->second.GROGetSommet().begin(), umCITGraph.find(sGraphval)->second.GROGetSommet().end(), iNum) == umCITGraph.find(sGraphval)->second.GROGetSommet().end()) {
                            sErreur = "L'identifiant du sommet " + to_string(iNum) + " est introuvable. Veuillez resaisir un identifiant valide.";
                        }
                        else {
                            iMenu = 24;
                            iSommet = iNum;
                            sErreur.clear();
                        }
                    }
                }
                catch (...) {
                    sErreur = "Erreur, l'identifiant " + sNum + " n'est pas valide. Veuillez saisir un identifiant valide. (Unsigned int)";
                }
            }
        }
        else if (iMenu == 23) {
            GetChoiceSommetSupprim(sGraphval);
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 19;
                sErreur.clear();
            }
            else {
                try {
                    unsigned int iNum = stoi(sNum);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROSupprimmerSommet(iNum);
                            sErreur = "Le sommet a ete supprime avec succes.";
                            iMenu = 19;
                        }
                        else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROSupprimmerSommet(iNum);
                            sErreur = "Le sommet a ete supprime avec succes.";
                            iMenu = 19;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 300) {
                            sErreur = "L'identifiant du sommet " + to_string(iNum) + " est introuvable. Veuillez resaisir un identifiant valide.";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Erreur, l'identifiant " + sNum + " n'est pas valide. Veuillez saisir un identifiant valide. (Unsigned int)";
                }
            }

        }

        else if (iMenu == 24) {
            GetChoiceSommetNomNouveau();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 22;
                sErreur.clear();
            }
            else {
                try {
                    unsigned int iNum = stoi(sNum);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROModifSommet(iSommet, iNum);
                            sErreur = "Le sommet a ete modifie avec succes";
                            iMenu = 19;
                        }
                        else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROModifSommet(iSommet, iNum);
                            sErreur = "Le sommet a ete modifie avec succes";
                            iMenu = 19;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 5) {
                            sErreur = "Erreur, le sommet ayant l'identifiant " + to_string(iNum) + " existe deja";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Erreur, l'identifiant " + sNum + " n'est pas valide. Veuillez saisir un identifiant valide. (Unsigned int)";
                }
            }
        }
        else if (iMenu == 25) {
            GetChoiceImportNom();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 5;
            }
            else {
                if (umCITGraphOrient.find(sNum) != umCITGraphOrient.end()) {
                    sErreur = "Un graphe ayant le nom " + sNum + " existe deja. Veuillez choisir un autre nom.";
                }
                else {
                    umCITGraphOrient[sNum] = FichierImpExp.LIFLireTexte(sFichier);
                    sErreur = "Le graphe a ete cree avec succes.";
                    iMenu = 5;
                }
            }
        }
        else if (iMenu == 26) {
            GetChoiceArcNom();
            string sNum;
            string sNum2;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 20;
                sErreur.clear();
            }
            else {
                try {
                    cout << ">>> ";
                    cin >> sNum2;
                    unsigned int iNum1 = stoi(sNum);
                    unsigned int iNum2 = stoi(sNum2);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROAjouterArc2(iNum1, iNum2);
                            sErreur = "L'arc a ete ajoute avec succes";
                            iMenu = 20;
                        }
                        else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROAjouterArc2(iNum1, iNum2);
                            sErreur = "L'arc a ete ajoute avec succes";
                            iMenu = 20;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 300) {
                            sErreur = "Un ou deux sommets precises sont inexistant.";
                        }
                        else if (EXCObjet.EXCLirevaleur() == 100) {
                            sErreur = "Ce programme ne permet pas de manipuler des arcs reentrants. Veuillez saisir des identifiants valides.";
                        }
                        else if (EXCObjet.EXCLirevaleur() == 400) {
                            sErreur = "L'arc precise existe deja. Veuillez indiquer d'autres identifiants.";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Un ou les deux identifiants indiques sont non valides. Veuillez saisir des ID valides.(Unsigned int)";
                }
            }
        }
        else if (iMenu == 27) {
            GetChoiceArcListe(sGraphval);
            string sNum;
            string sNum2;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 20;
                sErreur.clear();
            }
            else {
                cout << ">>> ";
                cin >> sNum2;
                try {
                    iArc1 = stoi(sNum);
                    iArc2 = stoi(sNum2);
                    if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                        if (umCITGraphOrient.find(sGraphval)->second.GROVerifArcExist(iArc1, iArc2)) {
                            iMenu = 29;
                            sErreur.clear();
                        }
                        else {
                            sErreur = "L'arc indique est introuvable, veuillez resaisir un arc existant.";
                        }
                    }
                    else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                        if (umCITGraph.find(sGraphval)->second.GROVerifArcExist(iArc1, iArc2)) {
                            iMenu = 29;
                            sErreur.clear();
                        }
                        else {
                            sErreur = "L'arc indique est introuvable, veuillez resaisir un arc existant.";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Les identifiants saisis sont de types invalides. Veuillez saisir des IDs valides.(Unsigned int)";
                }
            }
        }
        else if (iMenu == 28) {
            GetChoiceArcListeSup(sGraphval);
            string sNum;
            string sNum2;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 20;
                sErreur.clear();
            }
            else {
                cout << ">>> ";
                cin >> sNum2;
                try {
                    unsigned int iNum1 = stoi(sNum);
                    unsigned int iNum2 = stoi(sNum2);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROSupprimerArc(iNum1, iNum2);
                            sErreur = "L'arc a ete supprime avec succes.";
                            iMenu = 20;
                        }
                        if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROSupprimerArc(iNum1, iNum2);
                            sErreur = "L'arc a ete supprime avec succes.";
                            iMenu = 20;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 700) {
                            sErreur = "L'arc recherche est introuvable, veuillez saisir un arc existant.";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Un des identifiants saisies sont invalides.Veuillez saisir des IDs valides.(Unsigned Int)";
                }
            }
        }
        else if (iMenu == 29) {
            GetChoiceArcNomModif();
            string sNum;
            string sNum2;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }
            else if (sNum == "-1") {
                iMenu = 27;
                sErreur.clear();
            }
            else {
                try {
                    cout << ">>> ";
                    cin >> sNum2;
                    unsigned int iNum1 = stoi(sNum);
                    unsigned int iNum2 = stoi(sNum2);
                    try {
                        if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                            umCITGraphOrient.find(sGraphval)->second.GROModifierArc(iArc1, iArc2, iNum1, iNum2);
                            sErreur = "L'arc a ete modifie avec succes";
                            iMenu = 20;
                        }
                        else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                            umCITGraph.find(sGraphval)->second.GROModifierArc(iArc1, iArc2, iNum1, iNum2);
                            sErreur = "L'arc a ete modifie avec succes";
                            iMenu = 20;
                        }
                    }
                    catch (CException EXCObjet) {
                        if (EXCObjet.EXCLirevaleur() == 300) {
                            sErreur = "Un ou deux sommets precises sont inexistant.";
                        }
                        else if (EXCObjet.EXCLirevaleur() == 100) {
                            sErreur = "Ce programme ne permet pas de manipuler des arcs reentrants. Veuillez saisir des identifiants valides.";
                        }
                        else if (EXCObjet.EXCLirevaleur() == 400) {
                            sErreur = "L'arc precise existe deja. Veuillez indiquer d'autres identifiants.";
                        }
                    }
                }
                catch (...) {
                    sErreur = "Un ou les deux identifiants indiques sont non valides. Veuillez saisir des ID valides.(Unsigned int)";
                }
            }
        }
        else if (iMenu = 30) {
            GetChoiceGraphImport();
            string sNum;
            cin >> sNum;
            if (sNum == "0") {
                iMenu = 0;
                sErreur.clear();
            }if (sNum == "-1") {
                iMenu = 11;
                sErreur.clear();
            }
            else {
                try {
                    if (umCITGraphOrient.find(sGraphval) != umCITGraphOrient.end()) {
                        FichierImpExp.LIFExporterGrapheTexte(umCITGraphOrient.find(sGraphval)->second, sNum);
                        sErreur = "Le fichier a ete exporte avec succes.";
                        iMenu = 11;
                    }
                    else if (umCITGraph.find(sGraphval) != umCITGraph.end()) {
                        FichierImpExp.LIFExporterGrapheTexte(umCITGraph.find(sGraphval)->second, sNum);
                        sErreur = "Le fichier a ete exporte avec succes.";
                        iMenu = 11;
                    }
                }
                catch (CException EXCObjet) {
                    if (EXCObjet.EXCLirevaleur() == 120) {
                        sErreur = "Le fichier indique est introuvable. Veuillez verifier le lien.";
                    }
                }
            }
        }
        clearScreen();
    }
}

