#include <stdio.h>

int main(){

    // Weight Conversion Calculator
    int choice = 0;
    float kilogram = 0.0f;
    float pound = 0.0f;

    printf("This is your weight conversion calculator\n");
    printf("Please enter your choice:\nEnter 1 to convert from kilograms to pounds.\nEnter 2 to convert from pounds to kilograms.\nYour choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to Pounds
        printf("Please enter the weight (in kg):");
        scanf("%f", &kilogram);

        pound = kilogram * 2.20462;
        printf("Your weight (in kg) is: %.2f", pound);
    }
    else if (choice == 0){
        // Pounds to Kilograms
        printf("Please enter the weight (in lbs):");
        scanf("%f", &pound);

        kilogram = pound / 2.20462;
        printf("Your weight (in lbs) is: %.2f", pound);
    }
    else{
        // Invalid Input/Choice
        printf("You have entered an invalid input, please enter either 1 or 2 as your choice.");
    }

    return 0;
}