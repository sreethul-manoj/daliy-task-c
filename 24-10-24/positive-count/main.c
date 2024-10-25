#include <stdio.h>

int findpositive(int arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++) {
		if(arr[i]>=0) {
			count++;
		}	
    }
    return count;
    
}
int findnegative(int arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++) {
		if(arr[i]<0) {
			count++;
		}	
    }
    return count;

}
int main()
{
    
	int n;
	printf("enter the lenghtof array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the element : ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	
	
	
	printf("positive no : %d\n",findpositive(arr,n));
	printf("negative no : %d\n",findnegative(arr,n));
	
	return 0;
}
