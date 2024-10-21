

#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

int main() {
	struct date date1, date2;


	printf("Enter the first date (dd mm yyyy): ");
	scanf("%d %d %d", &date1.day, &date1.month, &date1.year);


	printf("Enter the second date (dd mm yyyy): ");
	scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

	if (date1.year < date2.year) {
		printf("The earlier date is: %d/%d/%d\n", date1.day, date1.month, date1.year);
	} else if (date1.year > date2.year) {
		printf("The earlier date is: %d/%d/%d\n", date2.day, date2.month, date2.year);
	} else {
		if (date1.month < date2.month) {
			printf("The earlier date is: %d/%d/%d\n", date1.day, date1.month, date1.year);
		} else if (date1.month > date2.month) {
			printf("The earlier date is: %d/%d/%d\n", date2.day, date2.month, date2.year);
		} else {
			if (date1.day < date2.day) {
				printf("The earlier date is: %d/%d/%d\n", date1.day, date1.month, date1.year);
			} else if (date1.day > date2.day) {
				printf("The earlier date is: %d/%d/%d\n", date2.day, date2.month, date2.year);
			} else {
				printf("The dates are the same.\n");
			}
		}
	}

	return 0;
}