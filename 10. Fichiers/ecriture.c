#include <cstdio>

int main() {
    FILE *pFile;
    pFile = fopen("data.txt", "w");
    if (pFile != NULL) {
        fputs("Voici une belle chaine\n", pFile);
        fputs("Et une autre\n", pFile);
        fclose(pFile);
    }
}