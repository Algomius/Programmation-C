#include <cstdio>
#include <cstdlib>
#include <cstring>

int main() {
    char c1[5] = "123";
    char c2[5] = "99";

    printf("Comparaison chaine : %d \n", strcmp(c1, c2));
    printf("Comparaison numerique : %d\n", atoi(c1) < atoi(c2));
}