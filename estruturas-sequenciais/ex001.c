#include <stdio.h>
#include <locale.h>

//Faça um programa que leia a temperatura em graus Farenheit (F), converta-a para graus Celsius e mostre a temperatura convertida na tela.

int main(void){

    setlocale(LC_ALL, "");

    float f, c;

    printf("Digite a temperatura Farenheit desejada para conversão em Celsius: \n");
    scanf("%f", &f);

    c = 5 * ((f - 32)/9);

    printf("A conversão de %.2f Fahrenheit é %.2fºCelsius.\n\n", f, c);
    printf("Programa encerrado.");

    return 0;
}