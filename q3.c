#include <stdio.h>

int main() 
{
    int num, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } 
    else 
    {
        for (i = 1; i <= num; i++) 
        {
            fatorial *= i;
        }
        printf("Fatorial de %d : %llu\n", num, fatorial);
    }

    return 0;
}
