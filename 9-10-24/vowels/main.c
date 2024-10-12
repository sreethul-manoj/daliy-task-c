/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	char choice;
	printf(" enter the alphabet vowels-");
	scanf("%c",&choice);

	switch(choice)
	{
	case 'a':
		printf("%c is a vowels", choice);
		break;
	case 'e':
		printf("%c is a vowels", choice);
		break;
	case 'i':
		printf("%c is a vowels", choice);
		break;
	case 'o':
		printf("%c is a vowels", choice);
		break;

	case 'u':
		printf("%c is a vowels", choice);
		break;




	default:
		printf(" not a vowels");
	}

	return 0;
}
