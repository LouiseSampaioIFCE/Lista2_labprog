#include <stdio.h>

int main() 
{
    int alturaJ = 150, alturaP = 110, anos = 0;

    while (alturaP <= alturaJ) {
        alturaJ += 2;
        alturaP += 3;
        anos++;
    }

    printf("Pedro sera maior que Jose em %d anos.\n", anos);

    return 0;
}
