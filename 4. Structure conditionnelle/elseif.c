#include <cstdio>

int main()
{
    int age;
    printf("Donner un age\n");
    scanf("%d", &age);
    if (age < 3)
        printf("Bebe\n");
    else if (age < 12)
        printf("Enfant\n");
    else if (age < 18)
        printf("Adolescent\n");
    else if (age < 70)
        printf("Adulte\n");
    else
        printf("Troisieme age\n");
}
