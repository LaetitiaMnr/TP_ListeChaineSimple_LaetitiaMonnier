//Un programme d'une liste simplement chainée
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
    char choix;
    int x, y, z;
    Liste *liste;
    //Element *courant;
    if ((liste = (Liste *) malloc (sizeof (Liste))) == NULL)
        return -1;

    //courant = NULL;
    choix = 'o';
    initialisation (liste);

    int pos, k;
    while (choix != 7){
        choix = menu (liste, &k);
        switch (choix){

            case 1:
                    printf ("Entrez un element : \n");
                    scanf ("%d", &x);
                    scanf ("%d", &y);
                    scanf ("%d", &z);

                    if (liste->taille == 0)
                        insListeVide(liste, x, y, z);

                    else

                        insDebutListe(liste, x, y, z);

                    printf ("%d elements : deb = %d-%d-%d, fin = %d-%d-%d\n", liste->taille,
                    liste->debut->donnee->x, liste->debut->donnee->y, liste->debut->donnee->z,
                    liste->fin->donnee->x, liste->fin->donnee->y, liste->fin->donnee->z);
                    affiche (liste);
                    break;

            case 2:
                    printf ("Entrez un element : \n");
                    scanf ("%d", &x);
                    scanf ("%d", &y);
                    scanf ("%d", &z);
                    insFinListe (liste, liste->fin, x, y, z);
                    printf ("%d elements: deb = %d-%d-%d, fin = %d-%d-%d\n", liste->taille,
                    liste->debut->donnee->x, liste->debut->donnee->y, liste->debut->donnee->z,
                    liste->fin->donnee->x, liste->fin->donnee->y, liste->fin->donnee->z);
                    affiche (liste);
                    break;

            case 3:
                    printf ("Entrez un element : \n");
                    scanf ("%d", &x);
                    scanf ("%d", &y);
                    scanf ("%d", &z);

                    do{
                        printf ("Entrez la position : ");
                        scanf ("%d", &pos);
                    }
                    while (pos < 1 || pos > liste->taille);
                        getchar ();
                        if (liste->taille == 1 || pos == liste->taille){
                        k = 1;
                        printf("-----------------------------------------------\n");
                        printf("Insertion echouée.Utilisez le menu {1|2} \n");
                        printf("-----------------------------------------------\n");
                    break;
                    }
                    insListe (liste, x, y, z, pos);
                    printf ("%d elements: deb = %d-%d-%d, fin = %d-%d-%d\n", liste->taille,
                    liste->debut->donnee->x, liste->debut->donnee->y, liste->debut->donnee->z,
                    liste->fin->donnee->x, liste->fin->donnee->y, liste->fin->donnee->z);
                    affiche (liste);
                    break;

            case 4:
                    suppDebut (liste);
                    if (liste->taille != 0)
                    printf ("%d elements: deb = %d-%d-%d, fin = %d-%d-%d\n", liste->taille,
                    liste->debut->donnee->x, liste->debut->donnee->y, liste->debut->donnee->z,
                    liste->fin->donnee->x, liste->fin->donnee->y, liste->fin->donnee->z);
                    else
                    printf ("liste vide\n");
                    affiche (liste);
                    break;

            case 5:
                    do{
                        printf ("Entrez la position : \n");
                        scanf ("%d", &pos);
                    }
                    while (pos < 1 || pos > liste->taille);
                        getchar ();
                        suppDansListe (liste, pos);
                        if (liste->taille != 0)
                            printf ("%d elements: deb = %d-%d-%d, fin = %d-%d-%d\n", liste->taille,
                            liste->debut->donnee->x, liste->debut->donnee->y, liste->debut->donnee->z,
                            liste->fin->donnee->x, liste->fin->donnee->y, liste->fin->donnee->z);
                        else
                            printf ("liste vide\n");
                            affiche (liste);
                    break;

            case 6:
                    detruire (liste);
                    printf ("la liste a ete detruite : %d elements\n", liste->taille);
                    break;
                }

    }
    return 0;
}

