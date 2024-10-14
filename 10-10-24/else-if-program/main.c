/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a;
	printf("enter the age: ");
	scanf("%d",&a);

	if (a>=0 && a<=12) {
		printf("%d is Child",a);
	}
	else if(a>=13 && a<=19) {
		printf("%d is Teenage",a);
	}
	else if(a>=20 && a<=64) {
		printf("%d is Adult",a);
	}
	else {
		printf("%d is Senior");
	}

	return 0;
}