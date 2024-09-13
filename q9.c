#include <stdio.h>

int main() 
{
    int a = 1, b = 1, c, i;

    printf("Serie de Fibonacci ate o vigesimo termo:\n");
    printf("%d %d ", a, b);

    for (i = 3; i <= 20; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
