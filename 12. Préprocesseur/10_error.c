#include "stdio.h"

#define VERSION 2

#if VERSION < 3
    #error Version du programme trop basse pour pouvoir continuer
#endif

int main() {
    printf("coucou\n");
}