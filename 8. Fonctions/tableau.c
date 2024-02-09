#include <cstdio>
#include <cstdlib>
#include <time.h>

void init(int tab[], int taille) {
    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        tab[i] = rand() % 100;
    }
}

void afficher(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d\n", tab[i]);
    }
}

float moyenne(int tab[], int taille) {
    float m = 0;
    for (int i = 0; i < taille; i++) {
        m += tab[i];
    }

    return (m / taille);
}

int main() {
    const int TAILLE = 10;
    int t[TAILLE];

    init(t, TAILLE);
    afficher(t, TAILLE);
    printf("Moyenne du tableau : %f\n", moyenne(t, TAILLE));
}