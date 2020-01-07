#include <stdio.h>

int main(void)
{
	int number = printf("Enter a dollar amount: ");
	scanf("%d", &number);	
	
	int twenty = number/20, ten = twenty/10, 
	five = ten/5, one = five/1;
	
	printf("$20 bills: %d \n", twenty);
	printf("$10 bills: %d \n", ten);
	printf("$5 bills: %d \n", five);
	printf("$1 bills: %d \n", one);
	
	return 0;	
}					

	
	
