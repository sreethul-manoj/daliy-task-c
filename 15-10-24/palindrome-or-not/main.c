/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,rev=0,rem;
	printf("Enter the no:");
	scanf("%d",&a);
	a=b;

	while(b!=0) {
		rem=b%10;
		rev=(rev*10)+rem;
		b=b/10;
	}
	if(a==rev) {
		printf("Entered num is  Palindrome");
	}
	else {
		printf("Entered num is not Palindrome");
	}


    return 0;
}
