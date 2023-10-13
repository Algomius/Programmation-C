#include <stdio.h>

int main() 
{
    int n1, n2;

    printf("Donnez moi un nombre : \n");
    scanf("%d", &n1);

    printf("Donnez moi un autre nombre : \n");
    scanf("%d", &n2);

    printf("Un message qui ne pose pas de probleme : %d - %d\n", n1, n2) ;
    fprintf(stdout, "Un autre message tout a fait acceptable\n");
    fprintf(stderr, "Erreur fatale, tout est detruit\n");
}
