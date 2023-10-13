#include <cstdio>
#include <cstring>
#include <cstdlib>

int main(int argc, char* argv[]) 
{
    char s[200];
    int i;

    printf("Vous etes dans le programme %s\n", argv[0]);

    if (argc == 3) 
    {
        strncpy(s, argv[1], 200);
        i = atoi(argv[2]);
    }

    if (argc == 2) 
    {
        strncpy(s, argv[1], 200);
        printf("Quel est votre age ?\n");
        scanf("%d", &i);
    }

    if (argc == 1) 
    {
        printf("Quel est votre nom ?\n");
        scanf("%s", &s);
        printf("Quel est votre age ?\n");
        scanf("%d", &i);
    }

    printf("Vous vous appelez %s et vous avez %d ans\n", s, i) ;

    fprintf(stderr, "Erreur fatale, tout est detruit\n");

    return 9;
}
