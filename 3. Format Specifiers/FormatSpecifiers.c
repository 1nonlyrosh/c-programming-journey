#include <stdio.h>

int main(){

    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);
    
    /*Format Specifier: These are the special tokens that start with % symbol,
                        these are followed by the chracter that specifies that datatype
                        and optional modifiers (width, precision, flags).
                        They control how the datat is displayed and interpreted.*/                
    
    int age = 22;
    float price = 2003874.45;
    double pi = 3.14159;
    char currency = '$';
    char name[] = "Roshan Vilas Khengare";

    //Following are the flags used for each datatype:
    printf("%d \n", age); // d <- decimal
    printf("%f \n", price); // f <- float
    printf("%lf \n", pi); // f or lf <- double (we need to use the lf specifier for double when we use the scanf function.)
    printf("%c \n", currency); // c <- char
    printf("%s \n\n", name); // s <- string

    //Width: following is the way to set the width of the output of the variable using the format specifiers.
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;
    
    printf("%d \n", num1);
    printf("%d \n", num2);
    printf("%d \n\n", num3);
    
    printf("%3d\n", num1); // The number 3 before the token d specifies the width of the output. This would take it righ justified.
    printf("%3d\n", num2);
    printf("%3d\n\n",num3);
    
    printf("%-3d\n", num1);// -3 before the token makes the output of the variable left-justified.
    printf("%-3d\n", num2);
    printf("%-3d\n\n", num3);
    
    printf("%03d \n", num1);// Adding 0 before the token adds 0 before the output values of the variable.
    printf("%03d \n", num2);
    printf("%03d \n\n", num3);
    
    printf("%+3d \n", num1);// Adding + before the token adds +/- before the output values of the variable.
    printf("%+3d \n", num2);
    printf("%+3d \n\n", num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f \n", price1);// The float datatype by default gives out 6 places of values after the decimal in its output.
    printf("%f \n", price2);
    printf("%f \n\n", price3);

    printf("%.2f \n", price1);// Adding .2 before the token f gives out only 2 places of values after the decimal in the output.
    printf("%.2f \n", price2);
    printf("%.2f \n\n", price3);

    printf("%+17.2f\n", price3);// Using the width precision and flags combines.

    return 0;
}



















 