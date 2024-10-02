#include <stdio.h>

// Função recursiva para calcular o coeficiente binomial
int coeficiente_binomial(int n, int k) {
    // Casos base
    if (k == 0 || k == n) {
        return 1;
    }
    // Recursão baseada na fórmula: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return coeficiente_binomial(n - 1, k - 1) + coeficiente_binomial(n - 1, k);
}

int main() {
    int n, k;

    // Leitura dos valores de n e k
    printf("Digite os valores de n e k: ");
    scanf("%d %d", &n, &k);

    // Verificação se k é válido
    if (k < 0 || k > n) {
        printf("Valores inválidos: k deve estar entre 0 e n.\n");
        return 1;
    }

    // Calcula e exibe o coeficiente binomial
    printf("O coeficiente binomial de %d e %d é: %d\n", n, k, coeficiente_binomial(n, k));

    return 0;
}
