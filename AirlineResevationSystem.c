#include<stdio.h>
#include<string.h>
int main(void) {
	int select;
	int a;
	int array[100] = { 0 };
	printf("Type 1 for \" first class\"\n");
	printf("Type 2 for \"Economy class\"\n");
	printf("select type of class: ");
	scanf_s("%d", &select);
	    if (select == 1) {
		printf("please select a seat number(1-30) ");
		scanf_s("%d", &a);
		if (a > 30) {
			printf("please enter apprpriate seat  num\n");
			scanf_s("%d", &a);
		}
		if (array[a] == 0) {
			printf("seat is available\n");
			printf("your request is accepted\nyour boarding pass is here\n");
			array[a]=1;
			printf("======================================\n");
			printf("|| your seat number is : %d           ||\n",a);
			printf("|| you're travelling in first class  ||\n");
			printf("======================================\n");
		}	
	
	if (array[a] == 1)
	{
		printf("seat is booked\n");
	}
	}
}
printf("select type of class: ");
	scanf_s("%d", &select);
