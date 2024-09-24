#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia o número correspondente ao mês atual e os dígitos (somente os quatro números) de uma placa de veículo, e através do número finalizador da placa (algarismo da casa das unidades) determine se o IPVA do veículo vence no mês corrente.

int main(void){

    int last_digit;

    printf("Digite o ultimo numero da placa [0-9]: ");
    scanf("%d", &last_digit);

    switch(last_digit){
        
        case 1:
            printf("O IPVA vence em Janeiro.\n");
            break;
        case 2:
            printf("O IPVA vence em Fevereiro.\n");
            break;
        case 3:
            printf("O IPVA vence em Março.\n");
            break;
        case 4:
            printf("O IPVA vence em Abril.\n");
            break;
        case 5:
            printf("O IPVA vence em Maio.\n");
            break;
        case 6:
            printf("O IPVA vence em Junho.\n");
            break;
        case 7:
            printf("O IPVA vence em Julho.\n");
            break;
        case 8:
            printf("O IPVA vence em Agosto.\n");
            break;
        case 9:
            printf("O IPVA vence em Setembro.\n");
            break;
        default:
            printf("Número inválido.\n");
    }

    system("pause");

    return 0;
}