#include "stdio.h"

//#define facto(a) a == 1 || a == 0 ? 1 : a*facto(a-1)

#define facto(a) a == 1 || a == 0 ? 1 : a*triche(a-1)
#define triche(a) facto(a)


int main() {
    printf("Facto de 25 %d\n", facto(25));
}