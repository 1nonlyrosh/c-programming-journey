#include <stdio.h>
#include <stdbool.h> // We need to use the <stdbool.h> header file to use the Boolean datatype.

int main() {
    //Variable is a resuable container for a value. It behaves like the value that it contains.
    //There are various types of variables of different data types.
    //We have to mention the datatype of the container everytime we initialize it.
    
    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);
    
    //1. integer (size: 4 bytes, range: -2,147,483,648 to 2,147,483,647)
    int age = 25; 
    printf("You are %d years old.\n", age);// To use the variable in this statement, we need to use a format specifier (which here is "%" " is the format specifier and "d" is the int).
    int age1 = 23.4;
    printf("You are %d years old.", age1);// Integers store only whole numbers, they don't store fractional/decimal values, it truncates them in the output if there are any.
    
    //2.float (single-precision decimal number, size: 4 bytes, range: ~±3.4 × 10³⁸, ~6–7 digits precision)
    float gpa = 9.8;
    printf("Your GPA this semester is %.2f.\n", gpa);// We use the %f format specifier to use the float variable in the statement and the number ".1" specifies the number of decimal places that we need in the output after the decimal point.
    float price = 23450.67;
    printf("This item would cost you %.2f INR.\n", price);
    float temprature = -10.4567;
    printf("The temprature is %.2f C out here.\n", temprature);

    //3. double (double-precision decimal number, size: 8 bytes, range: ~±1.7 × 10³⁰⁸, ~15–16 digits precision)
    double pi = 3.14159;
    printf("The value of pi upto the 5th place after the decimal is %lf.\n", pi);// We use the double datatype if we need a more precise value(it provides us with a precision upto 16 places after the decimal, the default is 6 places after the decimal). We use the format sepcifier %lf to use the double variable inside the statement.
    double e = 2.718281828459045235360287471352;
    printf("The value of the Euler's number is %.15lf\n", e);// We use double variable if we need extreme precision.

    //4. char (size: 1 byte, range: -128 to 127 (signed) or 0 to 255 (unsigned))
    char grade = 'A';
    printf("Your grade in this examination is: %c.\n", grade); //We use the char variable to store character value (we need to use the '' quotations we need to initialize it).
    char currency = '$';
    printf("The currency used in the United States is: %c \n", currency);

    //5. string (char[], these are strings of characters, size: variable)
    char name[] = "Roshan Vilas Khengare";
    printf("Your name in the examination form is: %s \n", name); //We use the string datatype to store string values (which are series of character values), these values are stored inside an [](array). String is nothing but array of characters.
    char food[] = "Pizza123";
    printf("Your favourite is: %s \n", food); //The numbers inside the strings are stored as character values rather than numeric values.

    // bool (size: 1 byte)
    bool isOnline = true;
    printf("The online status of the student is: %d \n", isOnline); //True stands for 1, and False stands for 0.
    //Boolean variable are mostly used inside loops and condition statements.
    if(isOnline){
        printf("You are Online.\n");
    }else{
        printf("You are Offline.\n");
    }

    //6. signed short (size: 2 bytes, range: -32,768 to 32,767)
    short temp = -12;
    printf("The temprature right now is: %hd C \n", temp);

    // unsigned short (size: 2 bytes, range: 0 to 65,535)
    short temp1 = 10;
    printf("The temprature right now is: %hd C \n", temp1);
    //In C, short is an integer data type used to store smaller whole numbers than a regular int
    
    return 0;




}