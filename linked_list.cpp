#include <iostream>
using namespace std;

//=============DEFINITION DES TYPES =================//
typedef int type_el;  ///type des elements de la liste//

struct Element; // un "maillon" de la liste chainee//
typedef Element* ListeChainee;

struct Element
{
    type_el element;           //L'element courant 
    ListeChainee Suite;        //La suite de la liste chainee  
};

constexpr ListeChainee LISTE_VIDE(nullptr);
//============== PROTOTYPES =========//

// Determine si la liste est vide //
bool est_vide(const ListeChainee& liste);

// Calculer la languer de la liste chainee //
unsigned int taille(const ListeChainee& liste);

// Affiche le contenu de la liste chainee
void affiche(const ListeChainee& liste);

// Inserer un nouvel element dans la liste //
void insere(const ListeChainee& liste, const type_el& valuer);

// Supprime le permier element de la liste//
void supprime(const ListeChainee& liste);

// ================================================================
int main()
{
    ListeChainee maliste(LISTE_VIDE);
    type_el un_element = 2;
    insere(maliste, un_element);
    insere(maliste, 1);
    insere(maliste->Suite, 3);
    insere(maliste, 0);
    insere(maliste, -2);
    insere(maliste->Suite, -1);

    affiche(maliste);

    /*supprime(maliste);
    affiche(maliste);

    supprime(maliste->Suite->Suite);
    affiche(maliste);
    */
    return 0;
}

//*********************************************************
bool est_vide(const ListeChainee& liste)
{
    return (liste == LISTE_VIDE);
}

//*********************************************************
unsigned int taille(const ListeChainee& liste)
{
    unsigned int t(0);
    for(ListeChainee iterator(liste); !est_vide(iterator); iterator = iterator->Suite)
    {
        ++t;
    }
    return t;
}

//*********************************************************
void affiche(const ListeChainee& liste)
{
    cout << "taille: " <<taille(liste) << endl;
    for(ListeChainee iterator(liste); !est_vide(iterator); iterator = iterator->Suite){
        cout << " -> " << iterator->element;
    }
    cout << endl;
}

//*********************************************************
void insere(ListeChainee& liste, const type_el& valeur)
{
    ListeChainee Suite(liste);
    liste = new Element;
    liste->element = valeur;
    liste = liste->Suite;
}

//*********************************************************
void supprime(ListeChainee& liste)
{
    if (liste->Suite != NULL)
    {
        ListeChainee Suite(liste->Suite);
        delete liste;
        liste = Suite;
    }
}
