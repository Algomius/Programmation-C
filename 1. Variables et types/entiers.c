#include <stdio.h>

int main() {
    short s;
	signed int i;
	i = 3000000000;
	printf("%d - %d\n", i , sizeof(i));
	long j;
	long long k;
	printf("%d - %d - %d - %d \n", sizeof(s) , sizeof(i), sizeof(j), sizeof(k));
}