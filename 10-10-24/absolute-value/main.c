/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numb,temp;
    printf("enter the value: ");
    scanf("%d",&numb);
    
    if(numb<=0){
        temp=-numb;
        printf("%d is absolute value of %d",temp,numb);
    }
    else{
        printf("invalid ");
    }

    return 0;
}