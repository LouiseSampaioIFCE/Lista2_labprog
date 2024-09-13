#include <stdio.h>

int main() 
{
    float num1, num2;

    printf("Digite o dividendo: ");
    scanf("%f", &num1);

    do 
    {
        printf("Digite o divisor (nao pode ser zero): ");
        scanf("%f", &num2);
    } while (num2 == 0);

    printf("Resultado da divisao: %.2f\n", num1 / num2);

    return 0;
}
