#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i, j;
	float a[50];
	for (i = 0; i <= 49; i++) 
	{
		a[i] = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
		printf("%f ", a[i]);
	}
}