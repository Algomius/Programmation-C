#include <cstdio>

int main() {
    int n;
    FILE *pFile;
    pFile = fopen("data.txt", "r");
    if (pFile != NULL) {
        n = fgetc(pFile);
        while(n != EOF) {
            printf("%c\n", n);
            n = fgetc(pFile);
        }
        fclose(pFile);
    }
}