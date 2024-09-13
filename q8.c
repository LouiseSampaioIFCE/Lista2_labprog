#include <stdio.h>

int main() 
{
    float valor, entrada;
    int prestacao;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor);

    prestacao = (int)(valor / 3); 
    entrada = valor - (2 * prestacao);

    printf("Entrada: R$ %.2f\n", entrada);
    printf("Prestacoes: R$ %d,00 cada\n", prestacao);

    return 0;
}
