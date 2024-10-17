/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main() {
    char input[100];
    int length;  

    printf("Enter the word: ");
    fgets(input, sizeof(input), stdin); 

    length = strlen(input) - 1;
    printf("Length of the input: %d", length);

    return 0;
}
