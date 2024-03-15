#include <cstdio>

int main() {
    int n;
    FILE *pFile;
    fpos_t pos;
    pFile = fopen("data.txt", "r");
    if (pFile != NULL) {
        n = fgetc(pFile);
        n = fgetc(pFile);
        n = fgetc(pFile);
        fgetpos (pFile,&pos);
        printf("Apres 3 lecture, je me trouve en position %lld\n", pos);
        pos = 7;
        fsetpos(pFile,&pos);
        n = fgetc(pFile);
        printf("Le caractere en position 7 est %c\n", n);
        fseek(pFile, -5, SEEK_END);
        for (int i = 0; i < 5; i ++) {
            n = fgetc(pFile);
            printf("Les derniers caracteres sont %c\n", n);  
        }
        fclose(pFile);
    }
}