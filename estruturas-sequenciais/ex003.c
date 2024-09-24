#include <stdio.h>
#include <locale.h>

//Faça um programa que leia três notas e imprima na tela a média aritmética delas.

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &p3);

    media = (p1 + p2 + p3)/3;
    printf("/nA média do aluno foi %.2f pontos.\n\n", media);
    printf("Programa encerrado.");

    return 0;
}