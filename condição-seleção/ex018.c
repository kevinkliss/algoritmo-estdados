#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    double pesoTerra, pesoPlaneta;

    // Solicitar o peso do usuário na Terra
    printf("Digite o peso na Terra (em kg): ");
    scanf("%lf", &pesoTerra);

    // Solicitar o planeta para verificar o peso
    printf("Verificar o peso em qual planeta [1-6]? \n");
    printf("1 - Mercúrio\n2 - Vênus\n3 - Marte\n4 - Júpiter\n5 - Saturno\n6 - Urano\n");
    scanf("%d", &n);

    // Calcular o peso no planeta escolhido
    switch(n) {
        case 1:
            pesoPlaneta = pesoTerra * 0.37;
            printf("Peso em Mercúrio: %.2lf kg.\n", pesoPlaneta);
            break;
        case 2:
            pesoPlaneta = pesoTerra * 0.88;
            printf("Peso em Vênus: %.2lf kg.\n", pesoPlaneta);
            break;
        case 3:
            pesoPlaneta = pesoTerra * 0.38;
            printf("Peso em Marte: %.2lf kg.\n", pesoPlaneta);
            break;
        case 4:
            pesoPlaneta = pesoTerra * 2.64;
            printf("Peso em Júpiter: %.2lf kg.\n", pesoPlaneta);
            break;
        case 5:
            pesoPlaneta = pesoTerra * 1.15;
            printf("Peso em Saturno: %.2lf kg.\n", pesoPlaneta);
            break;
        case 6:
            pesoPlaneta = pesoTerra * 1.17;
            printf("Peso em Urano: %.2lf kg.\n", pesoPlaneta);
            break;
        default:
            printf("Planeta inexistente.\n");
            return 0;
    }

    system("pause");
    return 0;
}
