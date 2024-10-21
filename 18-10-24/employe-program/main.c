#include <stdio.h>


struct Employee {
	int id;
	char name[50];
	float salary;
};

int main() {
	struct Employee s1;


	printf("Enter Employee ID: ");
	scanf("%d", &s1.id);

	printf("Enter Employee Name: ");
	scanf("%s", s1.name);

	printf("Enter Employee Salary: ");
	scanf("%f", &s1.salary);


	s1.salary = s1.salary + (s1.salary * 0.10);

	printf("\nUpdated Employee Details:\n");
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Updated Salary: %.2f\n", s1.salary);

	return 0;
}
