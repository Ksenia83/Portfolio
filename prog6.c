#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i;
	//int (*a)[50];
	//int *p;
	float a[50];
	float b;
	for (i = 1; i <= 50; i++) 
	{
		b = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
		*(a+1) = b;
		printf("%f ", b);
	}
}