#include <stdio.h>

int main() 
{
    int i;

    printf("Quadrados dos multiplos de 4 entre 15 e 90:\n");
    for (i = 16; i <= 90; i += 4) 
    {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}
