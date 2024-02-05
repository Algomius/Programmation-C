#include <cstdio>

int main()
{
    {
        int x = 5;
        printf("%d\n", x);
        {
            printf("%d\n", x);
        }
    }

    //printf("%d\n", x);
}
