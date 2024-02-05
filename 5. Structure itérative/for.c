#include <cstdio>

int main()
{
    for(unsigned int i = 0; i <=20; i++)
        printf("%d\n", i);

    printf("\n");

    for(unsigned int i = 0; i <=20; i+=2)
        printf("%d\n", i);

    printf("\n");

    for(int i = 20; i >=0; i--)
        printf("%d\n", i);
}
