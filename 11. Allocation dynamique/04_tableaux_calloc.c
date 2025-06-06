#include "stdio.h"
#include "stdlib.h"

int main() {
    int taille;
    printf("Taille du tableau d'entier : \n");
    scanf("%d", &taille);
    int *tab = calloc(taille, sizeof(int));
    if (tab != NULL) {
        for (int i = 0; i < taille; i++) {
            printf("Valeur de l'element %d - %d \n", i, tab[i]);
            scanf("%d", &tab[i]);
        }

        free(tab);
        //free(tab); Pas bon
        tab = NULL;
        free(tab);
        printf("Fin du programme\n");
    } else {
        printf("Il y a un soucis\n");
    }
}