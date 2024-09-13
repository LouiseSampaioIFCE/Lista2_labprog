#include <stdio.h>

int main() 
{
    int num, invertido = 0, original, digito;

    printf("Digite um numerode 5 digitos: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) 
    {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    if (original == invertido) 
    {
        printf("%d é um palindromo.\n", original);
    } 
    else 
    {
        printf("%d nao é um palindromo.\n", original);
    }

    return 0;
}
