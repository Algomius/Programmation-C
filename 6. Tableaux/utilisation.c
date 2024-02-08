#include <cstdio>

int main()
{
    const int TAILLE_TABLEAU = 10;
    int t1[TAILLE_TABLEAU] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0;i < TAILLE_TABLEAU;i++)
        printf("%d\n", t1[i]);

    
    t1[25] = 5;

}