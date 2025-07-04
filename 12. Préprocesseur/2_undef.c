#include "stdio.h"

#define var 8
#undef var
#define var 9

int main() {
    printf("%d\n", var);
}