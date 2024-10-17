/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
	char str[50];
	char result[50];
	int len, i;
	char temp[50];
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = 0;

	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] != ' ') {
			char temp[50]= {str[i], '\0'};
			strcat(result,temp);
		}
	}

	printf("String without spaces: %s", result);

	return 0;
}