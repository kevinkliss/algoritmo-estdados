#include <stdio.h>

int main(void) {
    int num, resultado;
    int *p; // Declaração do ponteiro para inteiro

    // (a) Leitura de um número inteiro do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // (b) Ponteiro aponta para a variável lida
    p = &num;

    // (c) Multiplicar o valor da variável por 2, usando o ponteiro
    resultado = (*p) * 2;

    // (d) Imprimir o valor original e o resultado da multiplicação
    printf("Valor original: %d\n", num);
    printf("Valor resultante da multiplicação por 2: %d\n", resultado);

    return 0;
}
