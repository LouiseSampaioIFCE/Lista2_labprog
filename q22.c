#include <stdio.h>

int main() 
{
    int num, count = 0, digito;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        digito = num % 10;
        if (digito == 7) 
        {
            count++;
        }
        num /= 10;
    }

    printf("O numero contem %d digitos 7.\n", count);

    return 0;
}
