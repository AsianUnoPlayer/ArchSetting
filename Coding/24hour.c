#include <stdio.h>

int main(void)
{
	int hour, min;

	printf("Enter 24 hour time: ");
	scanf("%d:%d", &hour, &min);

	printf("Equivalent 12 hour time: ");
	if (hour <= 12)
		printf("%d:%dam\n", hour, min);
	else if (hour > 12)
		printf("%d:%dpm\n", hour - 12, min);
	
	return 0;
}
