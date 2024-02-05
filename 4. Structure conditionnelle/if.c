#include <cstdio>

int main()
{
    int n;
    printf("Donner un nombre a tester\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("pair\n");
    else
        printf("impair\n");
        printf("je ne suis pas dans le if\n");
}
