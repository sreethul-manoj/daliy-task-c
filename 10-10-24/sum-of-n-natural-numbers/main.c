/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,sum;
    printf("enter the number : ");
    scanf("%d",&a);
    
    if(a>0){
        sum=(a*(a+1)/2);
    }
    printf("sum of the %d natural number is : %d",a,sum);
    return 0;
}