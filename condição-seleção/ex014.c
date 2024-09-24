#include <stdio.h>
#include <stdlib.h>

//Uma imagem digital possui largura w e altura h. Um pixel dessa imagem está associado a uma posição (x, y) no plano da imagem. Faça um programa que receba w, h, x e y, e informe se corresponde a um pixel da imagem especificada.


int main(void){

    int w, h, x, y;

    printf("Determine a largura da imagem: ");
    scanf("%d", &w);

    printf("Determine a altura da imagem: ");
    scanf("%d", &h);

    printf("Determine x: ");
    scanf("%d", &x);

    printf("Determine y: ");
    scanf("%d", &y);

    if ((x > 0 && x <=w) && (y > 0 && y <=h)){
        printf("\nA posição [%d, %d] corresponde a um pixel da imagem.\n", x, y);
    }
    else{
        printf("\nA posição [%d, %d] não corresponde a um pixel da imagem.\n", x, y);
    }

    system("pause");

    return 0;
}