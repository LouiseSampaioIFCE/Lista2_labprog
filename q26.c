#include <stdio.h>

int main() 
{
    int i;
    
    printf("Decimal\tBinario\t\tOctal\tHexadecimal\n");
    printf("-------\t-------\t\t-----\t------------\n");

    for (i = 1; i <= 256; i++) 
    {
        printf("%d\t", i);

        printf("0b");
        for (int j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
        }
        printf("\t");

        printf("%o\t", i);

        printf("0x%X\n", i);
    }

    return 0;
}
