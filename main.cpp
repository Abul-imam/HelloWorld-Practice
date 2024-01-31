/*********************
Name: Abul Imam
Assignment: 2
Purpose of the file: This file prints the
string length of the name of the program 
and other command-line parameters.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    /*********************************************
    This main function accepts the no of parameters (int)
    and the parameter values passed from the command line
    (array of strings).It prints the name of the program, 
    its length and the parameter count.Then it prints the
    length of each parameter using the strlength() function 
    and a for loop.	

    @param argc : argument count
    @param argv : argument vector/value

    @return 0 : successful execution

    @note argv[0] is always the name of the program.
    *********************************************/

    printf("My Command line analyzer...\n");
    printf("The program name is '%s'\n", argv[0]);
    printf("The length of the program name is %d\n", strlength(argv[0])); 
    printf("The number of command line parameters: %d\n", argc-1);

    for (int i=1; i<argc; i++){
	    printf("    The length of parameter %d is: %d\n", i, strlength(argv[i]));
    }

    return 0;
}
