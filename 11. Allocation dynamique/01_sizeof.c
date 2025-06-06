#include "stdio.h"

int main() {
    printf("Taille entier %ld\n", sizeof(int));
    printf("Taille long entier %ld\n", sizeof(long long int));
    printf("Taille double %ld\n", sizeof(double));
    printf("Taille caractere %ld\n", sizeof(char));

    int a = 5;

    printf("Taille de la variable a %ld\n", sizeof(a));
}