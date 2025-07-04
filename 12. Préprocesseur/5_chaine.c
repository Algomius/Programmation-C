#include "stdio.h"

#define chaine(a) #a

int main() {
    printf(chaine(123\n));
    printf(chaine(C:\\tmp\\truc.c\n));
    printf(chaine(voila une "citation"\n));

}
