#include <cstdio>

int main()
{
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p1;
    int *p2;

    p1 = &t[0];
    p2 = &t[5];

    printf("%d - %d - %d\n", *p1, *(p1 + 3), *(p1 + 5));
    printf("%d\n", p2 - p1);

    printf("%d - %d\n", t[0], *t);
    printf("%d - %d\n", t[5], *(t+5));
}