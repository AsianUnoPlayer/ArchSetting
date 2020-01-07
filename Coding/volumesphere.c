#include <stdio.h>

int main(void)
{
	int radius = printf("What is the radius?: "), volume = 4.0f/3.0f * 3.14 * (radius*radius*radius);
	
	scanf("%f", &radius);
	printf("Volume of the sphere is: %d\n", volume);
	
	return 0;
}
	

