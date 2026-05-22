#include <stdio.h>

int main() {

    // If Statements implement a block of code if the considtion for it is TRUE. But if the condition is not true then it wont implement the given code.
    
    int age = 0; // Here we have initialized the variable as 0 just for safety measures.
    
    printf("Please enter your current age: ");

    scanf("%d", &age);

    if(age >= 18 && age < 110) {

        printf("You are an adult."); // This block of code will only implemented if the age is equal or greater than 18.

    }
    else if (age > 0 && age < 18) {

        printf("You are a child:)"); // This block will get implemented if the condition for the above if statement is not met, but the conditions meets this elde-if statement.
    }
    else {

        printf("Pleae enter a valid age."); // This code will get implemented only if the above "if conditions" are not satisfied (a program would run even without an else statement though).

    }
    // The else-if and else statements are particulary useful to close all possible age edge cases.
    
    return 0;
}