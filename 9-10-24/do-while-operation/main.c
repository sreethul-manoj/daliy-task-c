/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int sum=0;
	int i=0;
	do {

		sum += i;
		i++;

	}
	while(i<=50);

	printf("sum of natural numbers:%d\n", sum);
	return 0;
}