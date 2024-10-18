/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int n = 5;
	char arr[n];
	
	printf("Enter five characters: ");
	
	for (int i = 0; i < n; i++) {
		scanf(" %c", &arr[i]);
	}
	printf("Elements in array: ");
	
	for (int i = 0; i < n; i++) {
		printf("%c ", arr[i]);
	}
	return 0;
}
