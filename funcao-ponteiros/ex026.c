#include <stdio.h>
#include <stdlib.h>

//O máximo divisor comum de três números inteiros positivos, MDC(x, y, z), pode ser calculado como MDC(MDC(x, y), z). Escreva um programa que leia três números inteiros fornecidos via teclado e imprima o MDC deles, usando a função MDC apresentada no texto.

int encontrar_MDC(int num1, int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        return encontrar_MDC(num2, num1 % num2);
    }
}

int main(void){
    int num1, num2, num3;

    printf("Determine o primeiro valor: ");
    scanf("%d", &num1);

    printf("Determine o segundo valor: ");
    scanf("%d", &num2);

    printf("Determine o terceiro valor: ");
    scanf("%d", &num3);

    printf("O MDC de %d, %d e %d é %d.\n", num1, num2, num3, encontrar_MDC(encontrar_MDC(num1, num2), num3));

    system("pause");
    return 0;
}