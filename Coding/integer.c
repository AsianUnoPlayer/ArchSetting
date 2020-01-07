#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 + n2) <= (n3 + n4)
		printf("%d and %d are highs and lows", n1, n2);
	else if (n1 + n2) > (n3 + n4)
		if (n2 - n3) > 0
			printf
