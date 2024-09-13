#include <stdio.h>

int main() 
{
    int a = 5, b;

    b = a++;
    printf("Pos-incremento: a = %d, b = %d\n", a, b);

    b = ++a;
    printf("Pre-incremento: a = %d, b = %d\n", a, b);

    return 0;
}
