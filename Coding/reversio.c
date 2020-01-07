#include <stdio.h>

int main(void)
{
	int num, placeholder, d1, d2, d3;
	
	printf("Enter three digit number: ");
	scanf("%d", &num);

	placeholder = num/10;
	d1 = placeholder/10;
	d2 = placeholder%10;
	d3 = num%10;

	printf("Reversed is: %d%d%d\n", d3, d2, d1);

	return 0;
}
