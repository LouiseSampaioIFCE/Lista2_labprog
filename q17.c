#include <stdio.h>

int main() 
{
    int celsius;
    float fahrenheit;

    printf("Conversao de Celsius para Fahrenheit:\n");
    for (celsius = 10; celsius <= 100; celsius += 10) 
    {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%dC = %.2fF\n", celsius, fahrenheit);
    }

    return 0;
}
