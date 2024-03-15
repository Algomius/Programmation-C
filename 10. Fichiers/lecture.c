#include <cstdio>

int main() {
    char c[201];
    FILE *pFile;
    pFile = fopen("data.txt", "r");
    if (pFile != NULL) {
        while(fgets(c, 200, pFile) != NULL) {
            printf("%s", c);
        }
        fclose(pFile);
    }
}