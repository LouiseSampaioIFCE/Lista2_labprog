#include <stdio.h>

int main() 
{
    int A, B, soma = 0, count = 0, i;
    float media;

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
        soma += i;
        count++;
    }

    media = (float)soma / count;
    printf("Media aritmetica dos numeros entre %d e %d: %.2f\n", A, B, media);

    return 0;
}
