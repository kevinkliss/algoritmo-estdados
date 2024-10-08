#include <stdio.h>

//Implemente uma função com assinatura void trocar_valores(int *a, int *b) que troque os valores de duas variáveis inteiras apontadadas pelos ponteiros a e b. A seguir, implemente o programa principal que leia dois números inteiros fornecidos via teclado, chame a função trocar_valores para trocar os valores e imprima os novos valores das variáveis.

void trocar_valores(int *a, int*b){
    int subs;
    subs = *a;
    *a = *b;
    *b = subs;
}

int main(void){
    int a = 2, b = 3;
    trocar_valores(&a, &b);

    printf("A = %d; B = %d.", a, b);

    return 0;
}