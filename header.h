#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct Point
{
    int x;
    int y;
    int z;

} Point;

typedef struct ElementListe
{
    Point *donnee;
    struct ElementListe *suivant;
} Element;

typedef struct ListeRepere
{
    Element *debut;
    Element *fin;
    int taille;
} Liste;

//Prototypes
/* initialisation de la liste */
extern void initialisation (Liste * liste);

Element* creationElement(int x, int y, int z);
/* INSERTION */
/* insertion dans une liste vide */
int insListeVide (Liste *liste, int x, int y, int z);
/* insertion au début de la liste */
int insDebutListe (Liste *liste, int x, int y, int z);
/* insertion à a fin de la liste */
extern int insFinListe (Liste * liste, Element * courant, int x, int y, int z);
/* insertition ailleurs */
extern int insListe (Liste * liste, int x, int y, int z, int pos);
/* SUPPRESSION */
extern int suppDebut (Liste * liste);
extern int suppDansListe (Liste * liste, int pos);
extern int menu (Liste *liste,int *k);
extern void affiche (Liste * liste);
extern void detruire (Liste * liste);

#endif // HEADER_H_INCLUDED

