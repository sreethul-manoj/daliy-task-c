

#include <stdio.h>


int main()
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	int temp[20];
	int i;

	printf("Enter the elements: ");
	for( i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++) {

		temp[i] = arr[i];
	}


	printf("\nNew Array: ");
	for ( i = 0; i < n; i++) {
		printf("%d ", temp[i]);
	}

	return 0;
}
