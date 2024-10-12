/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a=0;
    for (int i=10; i<=50; i++)
    {
        if (i%2==0){
            a += i;
        }
    }
    printf("sum of even number:%d",a);


	return 0;
}