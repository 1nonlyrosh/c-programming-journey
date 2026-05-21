#include <stdio.h>
#include <string.h>

int main(){

    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);

    // Shopping Cart Program
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter the item that you would like to purchase: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // This is used to get rid of the newline character within the input buffer and replace with the null terminator.


    printf("Enter the cost item that you tend to purchase: ");
    scanf("%f", &price);

    printf("Enter the quantity of the said item you would like to purchase: ");
    scanf("%d", &quantity);
    
    total = price * quantity;

    printf("\nYou have brought %d %s(s)\n", quantity, item);

    printf("Your purchase total is: %c%.2f", currency, total);

    return 0;
}