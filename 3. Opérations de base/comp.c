#include <cstdio>

int main() {
    int i = 4;
    int a = i++;

    printf("a : %d, i : %d \n", a, i);

    i = 4;
    a = ++i;

    printf("a : %d, i : %d \n", a, i);

}