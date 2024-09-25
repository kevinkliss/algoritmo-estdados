#include <stdio.h>
#include <stdlib.h>

//Implemente a função maior3 que recebe três inteiros e retorna o maior valor dentre eles. A função deve se apoiar, estritamente, na função maior2, ou seja, não pode utilizar o comando if ou while.

int Maior_Dois(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

int Maior_Tres(int num1, int num2, int num3){
    return Maior_Dois(Maior_Dois(num1, num2), num3);
}

int main(void){

    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    maior = Maior_Tres(num1, num2, num3);
    printf("Entre os números %d, %d e %d, o maior é %d.\n", num1, num2, num3, maior);

    system("pause");
    return 0;
}