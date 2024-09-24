#include <stdio.h>
#include <locale.h>

//A prefeitura da Serra abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto (salário mais benefícios sem desconto de impostos). Faça um programa que leia o salário bruto de uma pessoa e imprima na tela o valor máximo possível de prestação para este funcionário.

int main(void){

    setlocale(LC_ALL, "Portuguese");
    float sal, max;

    printf("Digite o salário do funcionário beneficiado: ");
    scanf("%f", &sal);

    max = sal * 0.3;

    printf("O valor máximo da prestação para esse funcionário com salário de R$%.2f é R$%.2f.", sal, max);

    return 0;
}