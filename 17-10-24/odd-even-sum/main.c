/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
	int arr[8];
	int even,odd;
	int i;
	printf("Enter the array with a space: ");
	for(int i=0; i<8; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<8; i++) {
		if(i % 2 == 0) {

			even = even+arr[i];
		}
		else {
			odd = odd+arr[i];
		}
	}
	printf("Sum of elements at even indices: %d\n", even);
	printf("Sum of elements at odd indices: %d\n", odd);
	return 0;

}