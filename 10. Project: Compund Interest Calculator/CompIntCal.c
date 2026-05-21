#include <stdio.h>
#include <math.h>

int main() {

    // Compund Interest Calculator

    double principal = 0.0f;
    double interestRate = 0.0f;
    int time = 0;
    int timesCompunded = 0;
    double totalReturn = 0.0f;
    double interest = 0.0f;
    
    //Coumpound Interest formula = P(1 + (r/n))^(nt)

    printf("Coumpound Interest Calculator\n");
    // Principal Amount
    printf("Enter the principal amount(in INR): ");
    scanf("%lf", &principal);

    // Interest Rate
    printf("Enter the interest rate of the said principal amount (in pc.): ");
    scanf("%lf", &interestRate);
    interestRate = interestRate / 100;

    // Time
    printf("Enter the time period for the compounding to take place (in yrs.): ");
    scanf("%d", &time);

    // Times compounded per unit time
    printf("Enter the number of times compunded per year: ");
    scanf("%d", &timesCompunded);

    // Returna calculations
    totalReturn = principal * pow((1 + (interestRate / timesCompunded)), (timesCompunded * time));
    printf("Hence, your returns after compunding is: %.2lf INR\n", totalReturn);

    // Interest Calculation
    interest = totalReturn - principal;
    printf("The interest on the principal accumulated over the period would be: %.2lf INR.", interest);

    return 0;
}
