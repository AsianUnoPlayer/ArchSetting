#include <stdio.h>

int main(void)
{
	int height = printf("Enter height of box: \n"),length = printf("Enter length of box: \n"), width = printf("Enter width of box: \n"), volume = height * length * width;
	scanf("%d", &height);
 	scanf("%d", &length);
 	scanf("%d", &width);
//	scanf("%d", &length);
//	scanf("%d", &width);

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume+165)/166);
	
	return 0;
}
