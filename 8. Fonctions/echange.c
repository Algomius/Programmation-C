#include <cstdio>

void echange(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;

    printf("Entrer un nombre : \n");
    scanf("%d", &a);

    printf("Entrer un autre nombre : \n");
    scanf("%d", &b);

    printf("a : %d - b : %d\n", a, b);

    echange(&a, &b);

    printf("a : %d - b : %d\n", a, b);
}