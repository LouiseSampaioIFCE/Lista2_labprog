#include <stdio.h>

int main() 
{
    int i, j, fatorial;

    printf("Fatoriais dos numeros impares entre 1 e 10:\n");
    
    for (i = 1; i <= 10; i += 2) 
    {
        fatorial = 1;
        for (j = 1; j <= i; j++) 
        {
            fatorial *= j;
        }
        printf("%d! = %d\n", i, fatorial);
    }

    return 0;
}
