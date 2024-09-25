#include <stdio.h>
#include <stdlib.h>

//Uma empresa deseja calcular o bônus salarial de seus funcionários com base no número de anos de trabalho e no salário atual. A regra para calcular o bônus é a seguinte: • Se o funcionário tiver mais de 5 anos de trabalho na empresa e o salário atual for superior a R$5000,00, o bônus será de 10% do salário. • Caso contrário, o bônus será de 5% do salário. Implemente uma função em linguagem C com assinatura float calcular_bonus(int anos_trabalho ,→ , float salario) para realizar esse cálculo. Escreva um programa que capture o número de anos de trabalho e o salário atual fornecidos via teclado, chame a função calcular_bonus para calcular o bônus e imprima o valor do bônus calculado.

float calcular_bonus(int anos_trabalho, float salario){
    if (anos_trabalho > 5 && salario > 5000){
        return salario * 1.1;
    }
    else{
        return salario * 1.05;
    }
}

int main(void){

    int anos_trabalho;
    float salario, bonus;

    printf("Digite quantos anos está no trabalho: ");
    scanf("%d", &anos_trabalho);

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    bonus = calcular_bonus(anos_trabalho, salario);
    printf("O bônus foi R$%.2f, logo, o novo salário é R$%.2f.\n", bonus - salario, bonus);

    system("pause");
    return 0;
}