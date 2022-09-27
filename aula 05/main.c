#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float grau;

    printf("Digite o valor de temperatura em graus celcius ");
    scanf("%f" , &fahrenheit);

    // processamento

    grau = (fahrenheit - 32 ) * (5.0 / 9.0);
    printf ("Valor correspondente em graus celsius   %f  " , grau );
    return 0;
}
