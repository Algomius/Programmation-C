#include <stdio.h>

int main() {
    float f = 4.5;
	double d = 12.6;
	printf("%f - %d\n", f , sizeof(f));
	printf("%d - %d\n", sizeof(f) , sizeof(d));
}