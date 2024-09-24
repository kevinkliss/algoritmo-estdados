#include <stdio.h>

//Escreva um programa em C que permita ao usuário extrair um dígito específico de uma sequência de 4 dígitos. O programa deve solicitar ao usuário a sequência de dígitos e a posição x do dígito que deseja extrair (1 a 4), e então exibir o dígito correspondente. Dica: Lembre-se de que ao dividir um número inteiro por 10, você “remove” o último dígito. E ao calcular o resto da divisão desse número por 10, você obtém o último dígito isoladamente.

int main(void) {

    int seq, pos, num;

    printf("Enter a 4-digit number sequence: ");
    scanf("%d", &seq);

    printf("Enter the position of the digit to extract (1 to 4): ");
    scanf("%d", &pos);

    // Ensure the position is valid
    if (pos < 1 || pos > 4) {
        printf("Invalid position! Please enter a number between 1 and 4.\n");
        return 1;
    }

    // Extract the digit based on the position
    switch (pos) {
        case 4:
            num = seq % 10;        // Get the last digit
            break;
        case 3:
            num = (seq / 10) % 10; // Get the third digit
            break;
        case 2:
            num = (seq / 100) % 10;// Get the second digit
            break;
        case 1:
            num = (seq / 1000) % 10;// Get the first digit
            break;
    }

    printf("The digit at position %d is: %d.\n", pos, num);

    return 0;
}