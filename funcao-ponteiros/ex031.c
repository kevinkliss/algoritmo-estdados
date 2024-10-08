#include <stdio.h>

//Implemente uma função com assinatura int soma_com_ponteiros(int *a, int *b). A função soma_com_ponteiros deve receber dois ponteiros para inteiros a e b como argumentos, calcular a soma dos valores apontados pelos ponteiros e retornar o resultado da soma. Para fins de teste, implemente o programa principal para que lê =dois números inteiros fornecidos via teclado, chama a função soma_com_ponteiros para calcular a soma e imprime o resultado.

int soma_com_ponteiros(int *a, int *b){
    return *a + *b;
}

int main(void){
    int num1, num2, resultado;

    printf("Determine o primeiro numero: ");
    scanf("%d", &num1);
    printf("Determine o segundo numero: ");
    scanf("%d", &num2);

    resultado = soma_com_ponteiros(&num1, &num2);

    printf("Resultado: %d.", resultado);

    return 0;
}