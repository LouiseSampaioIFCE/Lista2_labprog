#include <stdio.h>

int main() 
{
    unsigned long long graos = 1, total = 1;
    int i;

    for (i = 2; i <= 64; i++) 
    {
        graos *= 2;
        total += graos;
    }

    printf("O somatorio de graos no tabuleiro de xadrez: %llu\n", total);

    return 0;
}
