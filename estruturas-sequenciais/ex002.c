#include <stdio.h>
#include <locale.h>

//O mesmo que o exercício anterior, porém convertendo de Celsius para Farenheit.

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float f, c;

    printf("Digite a temperatura Celsius que deseja converter para Fahrenheit: ");
    scanf("%f", &c);

    f = ((9 * c)/5) + 32;

    printf("\nA conversão de %2.fº Celsius equivale a %2.f Fahrenheit.\n\n", c, f);
    printf("Programa encerrado.");

    return 0;
}