/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char operations;
	int a, b;
	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);
	printf("enter the operations (*,/,+,-): ");
	scanf(" %c",&operations);

	switch(operations ) {
	case'*':
		printf("%d", a*b);
		break;
	case'/':
		printf("%d", a/b);
		break;
	case'+':
		printf("%d", a+b);
		break;
	case'-':
		printf("%d", a-b);
		break;
	}

    return 0;
}