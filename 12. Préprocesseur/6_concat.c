#include "stdio.h"

#define concat(p1, p2) p1 ## p2



#define AJOUTER(type) \
    type ajouter_##type(type a, type b) { \
        return a + b; \
    }

AJOUTER(int)
AJOUTER(float)
AJOUTER(double)
AJOUTER(long)

/*
int ajouter_int(int a, int b) {
    return (a + b);
}

float ajouter_float(float a, float b) {
    return (a + b);
}

double ajouter_double(double a, double b) {
    return (a + b);
}
    */


int main() {
    int varLinux = 8;
    int varWin = 12;


    printf("%d\n", concat(var, Win));

    printf("Ajouter des entiers : %d\n", ajouter_int(8, 12));
    printf("Ajouter des reels : %f\n", ajouter_float(8.2, 12.4));
    printf("Ajouter des doubles : %lf\n", ajouter_double(8.222, 12));
}