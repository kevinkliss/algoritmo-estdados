#include <stdio.h>
#include <stdlib.h>

//Faça um programa que verifique se três valores a, b e c podem ser os comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar se o triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não formam triângulo”. Obs. 1: Um triângulo equilátero possui os comprimentos dos três lados iguais. Obs. 2: Um triângulo isósceles possui pelo menos dois lados de mesma medida. Obs. 3: Um triângulo escaleno possui todos os seus lados com medidas diferentes. Obs. 4: Supor que os valores lidos são inteiros e positivos. Obs. 5: Em todo triângulo, qualquer lado tem medida menor que a soma das medidas dos outros dois.

int main(void){

    int l1, l2, l3;

    printf("Digite o lado 1: ");
    scanf("%d", &l1);

    printf("Digite o lado 2: ");
    scanf("%d", &l2);

    printf("Digite o lado 3: ");
    scanf("%d", &l3);

    if ((l1 < 0 || l2 < 0 || l3 < 0) || (l1 >= l2 + l3 || l2 >= l1 + l3 || l3 >= l1 + l2)){
        printf("\nValor inválido.\n");
        return 1;
    }

    if (l1 == l2 && l1 == l3){
        printf("\nTriângulo Equilátero.\n");
    }
    else if (l1 == l2 || l1 == l3 || l2 == l3){
        printf("\nTriângulo Isósceles.\n");
    }
    else{
        printf("\nTriângulo Escaleno.\n");
    }

    system("pause");

    return 0;
}