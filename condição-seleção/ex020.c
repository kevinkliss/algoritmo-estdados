#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa para calcular as raízes reais de uma equação do 2º grau (ax2+bx+c) dado que seus coeficientes são informados pelo usuário. Utilize uma variável real delta para armazenar o resultado de b2 − 4ac. Informe o usuário se a equação tem 2, 1 ou nenhuma raiz real.

int main(void){

    int a, b, c;
    double delta, r1, r2;

    printf("Determine 'a': ");
    scanf("%d", &a);

    printf("Determine 'b': ");
    scanf("%d", &b);

    printf("Determine 'c': ");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta > 0){
        r1 = (- b + sqrt(delta)) / (2 * a);
        r2 = (- b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes: %.2lf e %.2lf.\n", r1, r2);
    }
    else if (delta == 0){
        r1 = (- b + sqrt(delta)) / (2 * a);
        printf("A equação possui uma raíz: %.2lf.\n", r1);
    }
    else{
        printf("A equação não possui raízes.\n");
    }
    system("pause");

    return 0;
    }