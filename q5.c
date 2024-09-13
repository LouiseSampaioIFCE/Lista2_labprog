#include <stdio.h>

int main() 
{
    int num, maior, menor, primeiro = 1;

    do 
    {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num != 0) 
        {
            if (primeiro) 
            {
                maior = menor = num;
                primeiro = 0;
            } 
            else 
            {
                if (num > maior) maior = num;
                if (num < menor) menor = num;
            }
        }
    } while (num != 0);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
