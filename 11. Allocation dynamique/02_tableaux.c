#include "stdio.h"

int main() {
    int tab[200];
    printf("Taille du tableau %ld\n", sizeof(tab));

    // Marche pas
    int taille;
    printf("Taille du tableau \n");
    scanf("%d", &taille);
    int tab2[taille];
    printf("Taille du tableau 2 %ld\n", sizeof(tab2));

    // compiler avec gcc .\02_tableaux.c -Werror=vla
}