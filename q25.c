#include <stdio.h>

int main() 
{
    int i, n;
    double pi, termo;
    double soma = 0.0;

    int maxTermos = 10; 

    printf("Numero de termos\tValor de pi aproximado\n");

    for (n = 1; n <= maxTermos; n++) 
    {
        termo = 4.0 / (2 * n - 1); 
        if (n % 2 == 0) 
        {
            termo = -termo;
        }
        soma += termo;
        pi = soma;

        printf("%d\t\t\t%.10f\n", n, pi);
    }

    return 0;
}
