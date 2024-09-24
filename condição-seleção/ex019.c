#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Crie um programa que receba um valor x e mostre o valor de f(x) definido a seguir: f(x) = 1, se x ≤ 1;  x, se 1 < x ≤ 2; x2, se 2 < x ≤ 3; x3, se x > 3

int main(void){

    int x;

    printf("Determine o valor de 'x': ");
    scanf("%d", &x);

    if (x <= 1){
        x = 1;
    }
    else if (x <= 2){
        x = x;
    }
    else if (x <= 3){
        x = pow(x, 2);
    }
    else{
        x = pow(x, 3);
    }
    printf("O valor de F(X) = %d.\n", x);
    system("pause");

    return 0;
}