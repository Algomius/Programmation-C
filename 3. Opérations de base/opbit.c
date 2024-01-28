#include <cstdio>

int main() {
    int ok = 0;
    int info = 1;
    int warning = 2;
    int erreur = 4;
    int fatal = 8;

    int warningFatal = warning + fatal;

    printf("Warning + fatal %d\n", warningFatal);

    int test1 = erreur + fatal + info;

    if (test1 & (erreur + fatal)) {
        printf("Erreur + fatal");
    }

    int test2 = fatal + info;

    if ((test2 & erreur) | (test2 & fatal) ) {
        printf("Erreur ou fatal");
    }
}