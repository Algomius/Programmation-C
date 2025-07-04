//#define _INC_STDIO 

#include "stdio.h"
#include "stdlib.h"

#define A_FAIRE "non"
#ifndef A_FAIRE
    #define A_FAIRE "oui" 
#endif

int main() {
    printf("%s\n", A_FAIRE);
}