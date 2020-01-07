#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The number %d has ", num);
	if (num < 10)
		printf("1 digits\n");
	else if (num < 100)
		printf("2 digits\n");
	else
		printf("3 digits\n");

	return 0;
}
