#include <cstdio>
#include <cstring>

int main() {
    char s1[] = "coucou ";
    char s2[] = "les amis";
    char c[200] = "";
    if (strcmp(s1,s2) < 0) 
    {
        strcat(c, s1);
        strcat(c, s2);
    } 
    else
    {
        strcat(c, s2);
        strcat(c, s1);
    }
    printf("Nouvelle chaine : %s\n", c);
    printf("Taille de la nouvelle chaine %d\n", strlen(c)); 
}