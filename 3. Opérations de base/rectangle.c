#include <cstdio>
#include <cmath>

int main() {
    float c1 = 0;
    float c2 = 0;

    printf("Donner la valeur du 1er cote \n");
    scanf("%f", &c1);

    printf("Donner la valeur du 2eme cote \n");
    scanf("%f", &c2);

    printf("Longeur du troisieme cote %f", round(sqrt(pow(c1, 2) + pow(c2, 2))*100)/100); 
}