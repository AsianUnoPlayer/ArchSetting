#include <stdio.h>

int main(void)
{
	float num, small, large;
	
//	printf("Enter a number (0 to end): ");
//	scanf("%f", num);
	while (num > 0) {
		printf("Enter a number (0 to end); ");
		scanf("%f", num);

		num -= num;
		if (num > 0) {
			num = large;
		if (num < 0)
			num = small;
		}
		printf("Largest number is %f", large);
	}
	
	return 0;
}


		
