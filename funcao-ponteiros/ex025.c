#include <stdio.h>
#include <stdlib.h>

//Implemente um programa em linguagem C que calcule o máximo divisor comum (MDC) de dois números inteiros positivos lidos do teclado utilizando a fórmula recursiva a seguir: MDC(x, y) = (y, se x mod y = 0, MDC(y, x mod y), caso contrário. (2) O MDC deve ser calculado por uma função recursiva.

int encontrar_MDC(int a, int b){
    //Algoritmo de Euclides
    if(b == 0){
        return a;
    }
    else{
        encontrar_MDC(b, a % b);
    }
}

int main(void){
    int a, b;

    printf("Determine o valor de 'a': ");
    scanf("%d", &a);

    printf("Determine o valor de 'b': ");
    scanf("%d", &b);

    printf("O MDC de %d e %d é %d.\n", a, b, encontrar_MDC(a, b));

    system("pause");
    return 0;
}