#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em linguagem C que utilize uma função chamada quadrado para calcular o quadrado de um número inteiro. A função quadrado deve receber um argumento inteiro x e retornar o valor do quadrado de x. O programa principal deve ler um número inteiro fornecido via teclado, chamar a função quadrado para calcular o quadrado e imprimir o resultado.

int QuadradoInteiro(int x){
    return x * x;
}

int main(void){

    int x, quadrado;

    printf("Determine o valor de 'x': ");
    scanf("%d", &x);

    quadrado = QuadradoInteiro(x);
    printf("O quadrado de %d é %d.\n", x, quadrado);

    system("pause");
    return 0;
}