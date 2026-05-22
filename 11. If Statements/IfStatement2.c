#include <stdio.h>
#include <stdbool.h> // We need this header file if want to use boolean functions in our code.

int main() {

    bool isStudent = true;

    if(isStudent) {

        printf("You are a Student.");

    }
    else{

        printf("You are not a student.");

    }

    return 0;
}