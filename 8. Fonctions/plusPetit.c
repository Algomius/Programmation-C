#include <cstdio>

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    printf("Entrer un nombre\n");
    scanf("%d", &a);

    printf("Entrer un autre nombre\n");
    scanf("%d", &b);

    printf("Le plus petit des deux est %d\n", minimum(a,b));
}