#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char mask, result;

    printf("Digite o valor de X (0 a 255): ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (5 a 7): ");
    scanf("%hhu", &Y);

    if (Y < 5 || Y > 7) 
    {
        printf("O valor de Y deve estar entre 5 e 7.\n");
        return 1;
    }

    mask = 0xFF;

    for (int i = 0; i < 4; i++) 
    {
        mask &= ~(1 << (Y - 1 + i)); 
    }

    result = (X & ~mask) | (X & mask);

    printf("Valor original de X: 0x%02X\n", X);
    printf("Valor original de Y: %u\n", Y);
    printf("Mascara para limpar os bits: 0x%02X\n", mask);
    printf("Resultado apos esconder X em torno de Y: 0x%02X\n", result);

    return 0;
}
