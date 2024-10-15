/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i,j,k;
    printf("Enter the no :");
	scanf("%d",&n);
    
    for (i=0; i < n; i++) {

        for (int j = 0; j <n-i; j++) {
            printf(" ");
        }
        for (k = 0; k <= i ; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
    }

