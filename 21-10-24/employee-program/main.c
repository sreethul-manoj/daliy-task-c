#include <stdio.h>
#include <string.h>

struct Employee {
	char name[100];
	int id;
	int salary;
	char designation[100];
};
void addEmployee(struct Employee A[],int *count) {
	printf("\nEnter the Employee Name: ");
	getchar();
	fgets(A[*count].name,sizeof(A[*count].name),stdin);

	printf("Enter the Employee Id: ");
	scanf("%d",&A[*count].id);

	printf("Enter the Salary:");
	scanf("%d",&A[*count].salary);

	printf("Enter the Designation of the Employee: ");
	getchar();
	fgets(A[*count].designation,sizeof(A[*count].designation),stdin);

	(*count)++;
	printf("The Employee added\n");
}
void view(struct Employee A[],int *count,int choice) {
	if(choice==2) {
		for(int i=0; i<*count; i++) {

			printf("\nEmployee Name:%s\n",A[i].name);
			printf("Employee ID:%d\n",A[i].id);
			printf("Designation :%s\n",A[i].designation);
			printf("Salary:%d\n",A[i].salary);
		}
	}

}
void delete(struct Employee A[], int *count) {
	int id;
	printf("\nEnter the Employee ID to delete: ");
	scanf("%d", &id);

	int found = 0;
	for (int i = 0; i < *count; i++) {
		if (A[i].id == id) {
			found = 1;

			for (int j = i; j < *count - 1; j++) {
				A[j] = A[j + 1];
			}
			(*count)--;
			printf("Employee with ID %d deleted\n", id);
			break;
		}
	}

	if (!found) {
		printf("Employee with ID %d is not found\n", id);
	}
}

int main()
{
	struct Employee A[100];
	int count=0;
	int choice ;

	while(1) {
		printf("\n1- Add a new employee\n");
		printf("2- Display all employees with details\n");
		printf("3- Delete an employee by employee ID\n");
		printf("4- Exit the program\n");
		printf("\nEnter the choice: ");
		scanf("%d",&choice);


		switch(choice) {
		case 1:
			addEmployee(A,&count);
			break;

		case 2:
			view(A,&count,choice);
			break;

		case 3:
			delete(A, &count);
			break;

		case 4:
			printf("Exiting the program.\n");
			return 0;

		}


	}

	return 0;
}