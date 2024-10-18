/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n=8;
    char arr[n];
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
    
    char max = arr[0];  
    char min = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    

    printf("Maximum value as string: %c\n", max);
    printf("Minimum value as string: %c\n", min);
    
    return 0;
}
