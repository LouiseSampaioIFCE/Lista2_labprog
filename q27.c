#include <stdio.h>

int main() 
{
    int num;
    int menor = 0;
    int maior = 0;
    int primeiroNumero = 1;

    printf("Digite numeros inteiros (Digite um numero negativo e par para sair):\n");

    while (1) 
    {
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) 
        {
            break;
        }

        if (primeiroNumero) 
        {
            menor = num;
            maior = num;
            primeiroNumero = 0;
        } 
        else {
            if (num < menor) 
            {
                menor = num;
            }
            if (num > maior) 
            {
                maior = num;
            }
        }
    }

    if (primeiroNumero) 
    {
        printf("Nenhum numero valido foi inserido.\n");
    } 
    else 
    {
        printf("Menor numero: %d\n", menor);
        printf("Maior numero: %d\n", maior);
        printf("Produto do maior pelo menor: %d\n", maior * menor);
    }

    return 0;
}
