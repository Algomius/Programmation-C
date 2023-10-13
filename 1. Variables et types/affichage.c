#include <stdio.h>

int main() {
    int anneeNaissance;
	int anneeActuelle = 2023;
    int age;
    printf("Quelle est votre annee de naissance ?\n");
    scanf("%d", &anneeNaissance);
	printf("Vous etes ne en %d\n", anneeNaissance);
    age = anneeActuelle - anneeNaissance;
    printf("Vous avez donc %d ans\n", age);
}