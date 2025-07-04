#include "stdio.h"
#include "stdlib.h"

#define VERSION 2
#if VERSION == 1
    #define A_FAIRE "oui"
#else 
    #define A_FAIRE "non"
#endif

int main() {
    printf("%s\n", A_FAIRE);
}