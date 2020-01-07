#include <stdio.h>

int main(void)
{
	float dollar = printf("How many dollars?: \n"), cent = printf("How many cents? (0.00): \n");
	scanf("%f", &dollar);
	scanf("%f", &cent);

	float tax = (dollar + cent) * 0.05, cost = dollar + cent + tax;
	printf("Your total cost will be %0.2f",cost);
	return 0;
} 
