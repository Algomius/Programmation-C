#include <cstdio>

int main() {
    int ePersonne = 120;
    int ePompe = 11;
    int n = 0;

    while (ePersonne >= ePompe) {
        printf("Faire une pompe\n");
        n++;
        ePersonne -= ePompe;
    }
    printf("%d\n", n);
}
