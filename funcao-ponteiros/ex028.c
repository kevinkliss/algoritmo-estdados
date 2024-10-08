#include <stdio.h>

//Testes com ponteiros.
//'*' conteúdo do ponteiro e '&' endereço do ponteiro; %p: especificador para o endereço apontado.
//"**" significa um ponteiro apontado para outro ponteiro.

int main(void){
    int a = 5;
    int b = 7;
    int *p, *q;
    p = &a;
    q = &b;
    a = a + b;
    b = a - b;
    *p = *q + b;

    printf("a = %d; b = %d; ptr = %d.\n", a, b, *p);
    

    return 0;
}