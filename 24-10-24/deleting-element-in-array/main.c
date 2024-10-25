

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the elements: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int delete;

	printf("Enter the element to be deleted: ");
	scanf("%d",&delete);

	int count= 0;

	for(int i=0; i<n; i++) {
		if(arr[i]==delete) {
			count++;

			for (int j = i; j < n- 1; j++) {
				arr[i]= arr[j+ 1];
			}
			n--;


			printf("\nElement %d deleted from array\n", delete);
			printf("\nNew array: ");

			for(int i = 0; i < n; i++) {
				printf("%d ", arr[i]);
			}
		}

	}

	return 0;
}