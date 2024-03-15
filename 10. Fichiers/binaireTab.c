#include <cstdio>
#include <cstring>
#include <cstdlib>

struct client {
    char nom[200];
    char prenom[200];
    int age;
};

int main() {
    const int NBCLIENT =3;
    struct client t[NBCLIENT];
    strcpy(t[0].nom, "Doe");
    strcpy(t[0].prenom, "John");
    t[0].age = 35;

    strcpy(t[1].nom, "Marley");
    strcpy(t[1].prenom, "Bob");
    t[1].age = 70;

    strcpy(t[2].nom, "Smith");
    strcpy(t[2].prenom, "Alison");
    t[2].age = 24;

    for (int i = 0; i < NBCLIENT; i++) {
        printf("Ecriture %i : %s - %s - %d\n", i, t[i].nom, t[i].prenom, t[i].age);
    }

    FILE *pFile;
    pFile = fopen("dataBinaire.txt", "wb");
    if (pFile != NULL) {
        fwrite(t, sizeof(struct client), NBCLIENT, pFile);
        fclose(pFile);
    }


    struct client lect[NBCLIENT];
    pFile = fopen("dataBinaire.txt", "rb");
    if (pFile != NULL) {
        fread(lect, sizeof(struct client), NBCLIENT, pFile);
        fclose(pFile);
    }

    for (int i = 0; i < NBCLIENT; i++) {
        printf("Lecture %i : %s - %s - %d\n", i, lect[i].nom, lect[i].prenom, lect[i].age);
    }
}