#include <stdio.h>

//Write a program that read two int values, storing them in variables x and y. At the end of execution, the values of these variables should be swapped. Restriction: you SHOULD NOT use temporary variable, only two variables should be used.

int main(void){

    int x, y;

    //Read values of x and y

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    //Display values before swapped

    printf("Before:\n\n");
    printf("x = %d.\n", x);
    printf("y = %d.\n\n", y);

    //Swap values of x and y

    x = x + y;
    y = x - y;
    x = x - y;

    //Display after swapped

    printf("After: \n\n");
    printf("x = %d.\n", x);
    printf("y = %d.\n", y);

    return 0;
}