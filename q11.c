#include <stdio.h>

int main() 
{
    int A, B, i, inicio, fim;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A < B) 
    {
        inicio = A;
        fim = B;
    } 
    else 
    {
        inicio = B;
        fim = A;
    }

    printf("Quadrados dos multiplos de 4 entre %d e %d:\n", inicio, fim);
    for (i = (inicio + 3) / 4 * 4; i <= fim; i += 4) 
    {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}
