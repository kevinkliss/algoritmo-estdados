#include <stdio.h>
#include <stdlib.h>

//Uma universidade deseja converter notas de seus estudantes de uma escala alfabética para uma escala numérica de acordo com a seguinte correspondência: Nota Valor Numérico - A 10; B 8; C 6; D 4; F 0. Implemente uma função em linguagem C com assinatura int converter_nota(char nota) que recebe uma nota alfabética como argumento e retorna a nota equivalente na escala numérica. Caso a nota alfabética seja inválida, a função deve retornar -1. Escreva um programa completo que leia uma nota alfabética fornecida via teclado, chame a função converter_nota para realizar a conversão e imprima a nota equivalente na escala numérica ou uma mensagem de erro caso a nota seja inválida.

int converter_nota(char nota){
    switch(nota){

        case 'A':
        return 10;

        case 'B':
        return 8;

        case 'C':
        return 6;

        case 'D':
        return 4;

        case 'F':
        return 0;

        default:
        return -1;
    }
}

int main(void){

    char nota;
    int nota_convertida;

    printf("Digite a nota do estudante [A, B, C, D ou F]: ");
    scanf("%c", &nota);

    nota_convertida = converter_nota(nota);

    if(nota_convertida != -1){
        printf("A nota %c foi convertida para %d.\n", nota, nota_convertida);
    }
    else{
        printf("Valor inválido.\n");
        return -1;
    }
    system("pause");

    return 0;
}