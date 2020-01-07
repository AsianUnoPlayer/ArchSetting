#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter speed in knots: ");
	scanf("%d", &num);

	printf("The current wind force is ");
	if (num < 1)
		printf("calm\n");
	else if (num < 4)
		printf("Light air\n");
	else if (num < 28)
		printf("Breeze\n");
	else if (num < 48)
		printf("Gale\n");
	else if (num < 64)
		printf("Storm\n");
	else
		printf("Hurricane\n");
	
	return 0;
}
