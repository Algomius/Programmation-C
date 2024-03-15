#include <cstdio>
#include <cstring>
#include <cstdlib>

struct client {
    char nom[200];
    char prenom[200];
    int age;
};

int main() {
    struct client *c1 = (struct client *) malloc(sizeof(struct client));
    strcpy(c1->nom, "Doe");
    strcpy(c1->prenom, "John");
    c1->age = 35;

    printf("Ecriture : %s - %s - %d\n", c1->nom, c1->prenom, c1->age);

    FILE *pFile;
    pFile = fopen("dataBinaire.txt", "wb");
    if (pFile != NULL) {
        fwrite(c1, sizeof(struct client), 1, pFile);
        fclose(pFile);
    }



    struct client *c2 =(struct client *) malloc(sizeof(struct client));;
    pFile = fopen("dataBinaire.txt", "rb");
    if (pFile != NULL) {
        fread(c2, sizeof(struct client), 1, pFile);
        fclose(pFile);
    }

    printf("Lecture : %s - %s - %d\n", c2->nom, c2->prenom, c2->age);
}