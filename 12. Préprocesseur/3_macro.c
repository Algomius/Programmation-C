#include "stdio.h"
#include "math.h"

#define carre(a) a*a
#define sommeCarre(a, b) carre(a)+ \
carre(b)
#define pythagore(a, b) sqrt(sommeCarre(a, b)) 

int main() {
    float p1 = 3;
    float p2 = 4;
    printf("Hypothenuse : %f\n", pythagore(p1, p2));
}
