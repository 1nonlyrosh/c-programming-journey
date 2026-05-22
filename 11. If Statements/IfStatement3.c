#include <stdio.h>
#include <string.h>

int main() {

    char yourName[50] = "";
    
    printf ("Please enter your name: ");
    fgets(yourName, sizeof(yourName), stdin);
    yourName[strlen(yourName) - 1] = '\0'; // This removes the newline character from the input buffer that went in during the fgets input.
    
    if(strlen(yourName) != 0 ){

    printf("Hello, %s.", yourName);

    }
    else{

        printf("You haven't enetered your name, please enter your name.");

    }
    return 0;

}