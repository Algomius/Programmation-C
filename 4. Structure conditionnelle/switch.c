#include <cstdio>

int main()
{
    int n;
    printf("Quelle est la fonction demandees ? \n");
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Ecouter vos messages\n");
            break;
        case 2:
            printf("Supprimer vos messages\n");
            break;
        default:
            printf("Je n'ai pas compris votre selection\n");
            break;

    }
}
