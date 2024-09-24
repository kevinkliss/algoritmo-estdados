#include <stdio.h>
#include <stdlib.h>

#define hidro 5.0

//Faça um programa que calcule e imprima o valor da conta de água, a partir da leitura do consumo de água do mês anterior e do mês atual marcado no hidrômetro. Sabe-se que a conta de água é formada pela tarifa de água somada à tarifa de esgoto (2,5% da conta de água) e à tarifa de conservação do hidrômetro (R$ 5,00). O consumo de água é de acordo com a tabela mostra na sequência: Consumo (m3) Tarifa (R$/m3) 0 até 10 (inclusive) 0,69; 11 até 15 (inclusive) 1,17; 16 até 25 (inclusive) 1,48; Acima de 25 - 1,60

int main(void){

//FALTOU SER MAIS ESPECÍFICO NOS NOMES DAS VARIÁVEIS.
    float c1, c2, total;

    printf("Determine a quantidade de água consumida no mês anterior: ");
    scanf("%f", &c1);

    printf("Determine a quantidade de agua consumida no mês atual: ");
    scanf("%f", &c2);

//ERREI AQUI, NÃO PRECISA DA OPERAÇÃO LÓGICA.
    if ((c1 + c2) >= 0 && (c1 + c2) < 11){
        total = ((c1 + c2) * 0.69) + (((c1 + c2) * 0.69) * 0.025) + hidro;
    }
    else if ((c1 + c2) >= 11 && (c1 + c2) < 16){
        total = ((c1 + c2) * 1.17) + (((c1 + c2) * 1.17) * 0.025) + hidro;
    }
    else if ((c1 + c2) >= 16 && (c1 + c2) < 26){
        total = ((c1 + c2) * 1.48) + (((c1 + c2) * 1.48) * 0.025) + hidro;
    }
    else {
        total = ((c1 + c2) * 1.60) + (((c1 + c2) * 1.60) * 0.025) + hidro;
    }

    printf("\nValor da conta da água: R$%.2lf.\n", total);

    system("pause");

    return 0;
}