#include <cstdio>

int main()
{
    int t1[20];
    printf("%d - %d \n", sizeof(int), sizeof(t1));

    const int t2[] = {1, 2, 3, 4, 5};
    t1[0] = 45;
    //t2[0] = 27;

    printf("%d \n", t2[17]);
}