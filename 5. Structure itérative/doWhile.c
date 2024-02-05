#include <cstdio>

int main()
{
    int n;

    do {

        printf("Il me faut un nombre entre 1 est 10 : \n");
        scanf("%d", &n);

    } while (n <= 1 || n >= 10);

}
