#include <stdio.h>
#include <locale.h>

//Faça um programa que leia um número inteiro maior que zero e informe se é par ou ímpar.

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &num);

    getchar(); //Limpar o buffer do scanf

    if(num <= 0){
        
        printf("\nEsse valor não é maior que 0.\n");
        return 1;
    }

    else{

        if(num % 2 == 0){
            printf("\nO valor %d é par.\n", num);
        }
        else{
            printf("\nO valor %d é ímpar.\n", num);
        }
    }

    printf("Pressione 'Enter' para sair.");
    getchar();

    return 0;
}