#include <cstdio>

int main()
{
    const int DIMENSION = 11;

    int table [DIMENSION] [DIMENSION];

    for (int i = 0; i < DIMENSION ; i++ )
    {
        for (int j = 0 ; j< DIMENSION ; j++)
        {
            table[i][j] = i * j;
        }

    }

    printf("Le resultat de 7 * 8 est %d\n", table[7][8]);

}