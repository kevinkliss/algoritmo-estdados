#include <stdio.h>


int main(void){
    int a = 2;
    int *ptr = &a;

    printf("Tamanho do ponteiro: %d bytes.\n", sizeof(ptr));
    printf("Tamanho da variavel apontada pelo ponteiro: %d bytes.\n", sizeof(*ptr));

    return 0;
}