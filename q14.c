#include <stdio.h>

int main() 
{
    int A, B, i, count = 0;

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
        if (i % 3 == 0) 
        {
            count++;
        }
    }

    printf("A quantidade de numeros divisiveis por 3 entre %d e %d: %d\n", A, B, count);

    return 0;
}
