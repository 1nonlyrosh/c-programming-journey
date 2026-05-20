//My first C Program
// "//" is used to write the comments, comments wont display as output. These are usefull for yourselves and other developers.
/*This is how we write a multi-lined 
comments.*/
#include <stdio.h> //preprocessor directive. It tells to include the standard I/O lib, which as varios I/O functions.
int main() { //This is the main fucntion.

    printf("Code compiled on: %s at %s\n", __DATE__, __TIME__);

    printf("This is my first C code. "); // This is the print statement.
    printf("This is cool programming language.\n"); 
    printf("This statement starts from a new line."); // The "\n" is used to start a new line in the program.
    return 0; // This statement ensures that out C program ran successfully, 0 stand for Exit Success, it indicates the program ran successfully, and any non-zero integer mean the program did not successfully. Modern C version do not need us to write this statement explicitlly, but its a good practice.
    //Every statement in the C ends with a ";".
}
/* To generate and read the aseebmly code use the following commands:
otool -tvV 1main > assembly.txt
code assembly.txt */ 
/* A much better tool for this Ghidra. It gives:
It gives:
assembly
pseudo-C decompilation
function names
control flow graphs
variables*/