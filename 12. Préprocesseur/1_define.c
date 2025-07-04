//#define inc #include 
//inc "stdlib.h"

//#define inc include 
//#inc "stdlib.h"


#include "stdio.h"

#define taille 20
#define tailleDouble taille*2

#define coucou printf("coucou\n");

int main() {
    int tab[taille];
    int tab2[tailleDouble];

    printf("Taille du premier tableau %d\n", sizeof(tab)/sizeof(int));
    printf("Taille du second tableau %d\n", sizeof(tab2)/sizeof(int));

    coucou

    coucou

    //coucoucou;
    printf("coucou\n");
}
