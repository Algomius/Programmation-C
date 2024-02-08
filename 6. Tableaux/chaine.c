#include <cstdio>

int main()
{
    char c1 [12] = {'C', 'o', 'u', 'c', 'o', 'u'};
    char c2 [12] = "Coucou";

    printf("%s-\n", c1);
    printf("%s-\n", c2);

    c2[2] = '\0';
    printf("%s-\n", c2);

}