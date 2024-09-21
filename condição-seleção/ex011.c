#include <stdio.h>
#include <stdlib.h>

//Uma grande companhia química paga seus vendedores por comissão. Os vendedores recebem R$200,00 por semana mais 9% de suas vendas brutas naquela semana. Por exemplo, um vendedor que vender o equivalente a R$ 500,00 em produtos em uma semana recebe R$ 200,00 mais 9% de R$ 500,00, ou seja, um total de R$ 245,00. Se as vendas ultrapassarem R$ 1000,00, o vendedor recebe também um prêmio de R$ 800,00. Faça um programa que receba as vendas brutas de um vendedor na última semana e escreva o valor a ser recebido pelo funcionário.

#define fixo 200
#define bonus 800

int main(void){

    double vendas, recebido;

    printf("Digite o valor bruto das vendas do funcionário: ");
    scanf("%lf", &vendas);

    if(vendas > 1000){
        recebido = fixo + (vendas * 0.09) + bonus;
        printf("\nParabéns! Suas vendas ultrapassaram o valor de R$1000.00. Por isso, será acrescido R$800.00 ao seu salário. Além disso, sua comissão atingiu R$%.2lf.\n", (vendas * 0.09));
        printf("Salário: R$%.2lf.\n", recebido);
    }
    
    else{
        recebido = fixo + (vendas * 0.09);
        printf("\nParabéns pelo desempenho dessa semana, sua comissão foi R$%.2lf.\n", (vendas * 0.09));
        printf("Salário: R$%.2lf.\n", recebido);
    }

    system("pause");

    return 0;
}