#include <stdio.h>
#include <locale.h>
#include <math.h>

//Faça um programa para calcular as raízes reais de uma equação do 2º grau (ax2+bx+c) dado que seus coeficientes são informados pelo usuário. Utilize uma variável real delta para armazenar o resultado de b2 − 4ac.

int main(void){

    setlocale(LC_ALL, "Portuguese");

    double a, b, c, delta, r1, r2;

    printf("Determine o valor de 'a': ");
    scanf("%lf", &a);

    printf("Determine o valor de 'b': ");
    scanf("%lf", &b);

    printf("Determine o valor de 'c': ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0){
        printf("Não há raízes.");
    }

    else if (delta == 0){
        r1 = (- b + sqrt(delta)) / (2 * a);
        printf("Há apenas uma raíz: %lf", r1);
    }

    else{
        r1 = (- b + sqrt(delta)) / (2 * a);
        r2 = (- b - sqrt(delta)) / (2 * a);
        printf("Raíz 1 = %lf.\nRaíz 2 = %lf.", r1, r2);
    }

    return 0;
}