#include <stdio.h>
#include <stdlib.h>

//A prefeitura da Serra abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa que leia o salário bruto e o valor da prestação, e informe se o empréstimo pode ou não ser concedido.

int main(void){

    double sal, prest, lim;

    printf("Digite seu salário: ");
    scanf("%lf", &sal);

    lim = sal * 0.3;

    do{
        printf("Digite o valor da prestação desejado: ");
        scanf("%lf", &prest);

        if(prest > lim){
            printf("\nO valor máximo da sua prestação não pode ultrapassar R$%.2lf.\n", lim);
        }
    } while (prest > lim);

    printf("\nO valor R$%.2lf se enquadra no valor limite da prestação. Empréstimo concedido.\n", prest);

    system("pause");
    return 0;
}