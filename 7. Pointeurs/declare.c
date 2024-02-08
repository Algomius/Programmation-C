#include <cstdio>

int main()
{
    int n = 5;
    int *adr_int;

    adr_int = &n;
    *adr_int = 8;

    printf("%d\n", n);

    int *p1 = (int *)malloc(sizeof(int));
    *p1 = 8;

    printf("%d\n", *p1);
}