#include <stdio.h>
#include <stdlib.h>

//Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total usando a seguinte tabela: Código Preço unitário (R$): 1001 - 5,32; 1324 - 6,45; 6548 - 2,37; 987 - 5,32; 7623 - 6,45; Obs.: Mostrar a mensagem “Código inválido” caso o valor digitado não esteja de acordo com a tabela.

int main(void){

    int codigo, quantidade;
    float total;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    switch(codigo){

        case 1001:
            total = quantidade * 5.32;
            break;

        case 1324:
            total = quantidade * 6.45;
            break;

        case 6548:
            total = quantidade * 2.37;
            break;

        case 987:
            total = quantidade * 5.32;
            break;

        case 7623:
            total = quantidade * 6.45;
            break;

        default:
            printf("Código inválido.\n");
            system("pause");
            return 0;     
    }

    printf("\nPreço total: R$%.2f.\n", total);

    system("pause");

    return 0;
}