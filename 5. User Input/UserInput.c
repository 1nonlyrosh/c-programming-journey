#include <stdio.h>
#include <string.h> // This header file allows us to use string functions.

int main(){

    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);

    // In C we can initialize a variable even when its not assigned a value.
    char name[30] = ""; // We need to specify the size of the string if we are not specifying the string here. Here the string has a maximum capacity of 30 bytes or characters.
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 <- this is a null terminator.
    // If you output these variables without assiging them values, then it may lead to undefined behavior.
    // Hence, its always a good practice to assign them some predefined temp values to prevent such undefined behavior.

    // scanf: this is the fucntion used to take the input from the user.
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); // We did not use the scanf function over here is because the scanf function cannot read empty spaces in a given string.
    //When the user presses Enter, fgets() usually stores the newline character too.
    //So if input is: Roshan⏎, the array may contain: 'R' 'o' 's' 'h' 'a' 'n' '\n' '\0'
    name[strlen(name) - 1] = '\0'; // IMPORTANT THINGY. This is used to avoid the unwanted buffer input of a SPACE.
    //This replaces the last character with the null terminator '\0'.
    printf("Please enter your current age: ");
    scanf("%d", &age);
    printf("Please enter your current gpa: ");
    scanf("%f", &gpa);
    printf("Please enter your valid grade: ");
    // The classic problem with %d followed by %c
    scanf(" %c", &grade);// The space before the %c tells scanf() to skip all whitespace before reading the character. These whitespace includes, spaces, tabs, and newlines
    // So if the buffer still has \n from the previous input, scanf(" %c", &grade) ignores it and waits for the real character
    
    // Display the entered values
    printf("\nYour name is: %s\n", name);
    printf("Your age is: %d\n", age);
    printf("Your GPA is: %.2f\n", gpa);
    printf("Your grade is: %c\n", grade);

    return 0;

}

/*Input Buffer:
When you type something on the keyboard and press Enter, 
the input does not go directly into your variables. 
It first goes into an internal temporary storage 
area called the input buffer.*/