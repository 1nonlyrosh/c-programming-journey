// In this program we are gonning to implement some important maths functions, which are useful in our day to day C programming
#include<stdio.h>
#include<math.h> // This is the library that we use in order to use these math functions in our program.

int main(){

    float x =  161.345;

    // 1. Square Root
    float sqr = sqrt(x); // The sqrt() is the function used to calculate the square root of the input value.
    printf("The square root of x is: %.2f\n", sqr);

    // 2. Power Funtion
    int pwr = pow(x, 2); // The  pow() is used to raise the input value to a specified power value.
    printf("The value of x raised to 2 is: %d\n", pwr);

    // 3. Round Function
    float rund = round(x); // The round function is used to the round the input value to the nearest value.
    printf("The round up value of x is: %.2f\n", rund);

    // 4. Ceil Function
    float rundup = ceil(x);
    printf("The ceil value of x is: %.2f\n", rundup); // The ceil function is used to always round up the input value.

    // 5. Floor Function
    float runddwn = floor(x);
    printf("The floor value of x is: %.2f\n", runddwn); // The ceil function is used to always round down the input value.

    // 6. Absolute Value
    float abslt = fabsf(x); // The absolute vlaue function (for integers, and fabsf() for floating point absolute value) is used to get the absolute distance from 0.
    printf("The absolute floating point value of x is: %.2f\n", abslt);

    // 7. Natural log 
    float nlog = log(x);
    printf("The natural log of x is: %.2f\n", nlog); // The log() function is used to calculate the natural log of the input value.

    // 8. Trig Functions
    float sine = sin(x);
    printf("The sine of x is : %.2f\n", sine); // The sin() function is used to calculate the sine of the input value. the input value is in terms of radians.
    // Similarily we can calculate other trigonometric values using their respective trig functions (like cosin(), tan(), cot(), csc()and etc.)





    return 0;
}