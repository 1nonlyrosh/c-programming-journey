#include <stdio.h>

int main(){

    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);

    //The following are the arithmetic operators: +, -, *, /, %, ++, --

    int x = 100;
    int y = -100;
    int z = 0; // We are going to store our results in this variable.

    // Addition
    z = x + y;
    printf("The addition of x and y is: %d \n", z);

    // Substraction
    z = x - y;
    printf("The substraction of x and y is: %d \n", z);

    // Multiplication
    z = x * y;
    printf("The multiplication of x and y is: %d", z);

    // Division
    z = x / y;
    printf("The division of x by y is: %d \n", z); // Integers don't store floating point values. So they only give the whole number part as the output, if there seems to be a floating part in it.

    // Modulus
    z = x % y;
    printf("The modulus of x and y is: %d \n", z); // It gives us the remainder of any division.

    // Increment operator
    x++;
    printf("The new value of x is: %d \n", x); // This increases the value of the variable by 1.

    //Decrement operator
    x--;
    printf("The new value of x is: %d \n", x); // This decreases the value of the variable by 1.

    // The increment and the decrement operators are mostly used when working with loops.

    // Augemented assignment operators (its basically a shortcut if you are reassiging the same variables.)
    x += 2; // This increases the value of the variable x by 2.
    printf("The new augmented assigned value of x is:%d \n", x);
    x -= 2; // This decreases the value of the variable x by 2.
    printf("The new augmented assigned value of x is:%d \n", x);
    x *= 2; // This multiplies the value of the variable x by 2.
    printf("The new augmented assigned value of x is:%d \n", x);
    x /= 2; //This divides the value of the variable x by 2.
    printf("The new augmented assigned value of x is:%d \n", x);

    return 0;
}