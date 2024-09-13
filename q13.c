#include <stdio.h>

int main() 
{
    int A, B, i, soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A > B) 
    {
        int temp = A;
        A = B;
        B = temp;
    }

    for (i = A; i <= B; i++) 
    {
        if (i % 2 == 0) 
        {
            soma += i;
        }
    }

    printf("A soma dos numeros pares entre %d e %d: %d\n", A, B, soma);

    return 0;
}
