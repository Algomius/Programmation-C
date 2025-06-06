#include "stdio.h"
#include "stdlib.h"

int main() {
    // On commence pa run tableau de 100
    int *tab = malloc(100 * sizeof(int));
    if (tab == NULL) {
        printf("Il y a un soucis\n");
        return 99;
    }

    printf("Valeur du pointeur %p\n", tab);

    // J'ai changé d'avis il me faut juste 40
    tab = realloc(tab, 40 * sizeof(int));
    if (tab == NULL) {
        printf("Il y a un soucis\n");
        return 99;
    }
    printf("Valeur du pointeur %p\n", tab);

    // 1000 c'est bien au final
    tab = realloc(tab, 1000 * sizeof(int));
    if (tab == NULL) {
        printf("Il y a un soucis\n");
        return 99;
    }
    printf("Valeur du pointeur %p\n", tab);

    free(tab);
    tab = NULL;
    printf("Fin du programme\n");
}