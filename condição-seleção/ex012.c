#include <stdio.h>
#include <stdlib.h>

//Calcule a média aritmética das três notas de um aluno e mostre, além do valor da média, uma mensagem de acordo com as condições explicitadas a seguir: Aprovado(Média >= 70%), Recuperação(50% < Média < 70%), Reprovado(Média < 50%).

int main(void){

    double n1, n2, n3, media;

    printf("Digite a primeira nota do aluno [0 a 10]: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota do aluno [0 a 10]: ");
    scanf("%lf", &n2);

    printf("Digite a terceira nota do aluno [0 a 10]: ");
    scanf("%lf", &n3);
    
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10){
        printf("\nNota inválida.\n");
        return 1;
    }

    media = (n1 + n2 + n3) / 3;

    if(media <= 5){
        printf("\nNota: %.2lf. [Reprovado].\n", media);
    }
    else if((media > 5) && (media < 7)){
        printf("\nNota: %.2lf. [Recuperação].\n", media);
    }
    else{
        printf("\nNota: %.2lf. [Aprovado].\n", media);
    }

    system("pause");

    return 0;
}