#include <stdio.h>

int main() 
{
    int dia;

    do 
    {
        printf("Digite um numero entre 1 e 7 para o dia da semana (0 para sair): ");
        scanf("%d", &dia);

        if (dia == 0) break;

        switch (dia) 
        {
            case 1: printf("Domingo\n"); break;
            case 2: printf("Segunda-feira\n"); break;
            case 3: printf("Terca-feira\n"); break;
            case 4: printf("Quarta-feira\n"); break;
            case 5: printf("Quinta-feira\n"); break;
            case 6: printf("Sexta-feira\n"); break;
            case 7: printf("Sabado\n"); break;
            default: printf("Número de dia não válido\n");
        }
    } while (1);

    return 0;
}
