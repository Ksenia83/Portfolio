#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ctg (int a[], float b[])
{
	int i, j, n;
	float f;
	//f = cos (2 * 3.14 * j / 50 + 3.14 / 2) / sin (2 * 3.14 * j / 50 + 3.14 / 2);
	for (i = 0; i < 50; i++)
	{
		b[i] = cos (2 * 3.14 * a[i] / 50 + 3.14 / 2) / sin (2 * 3.14 * a[i] / 50 + 3.14 / 2);
		//b[i] = f;
		printf("%f ", b[i]);
	}
	//return b[i];
}

main()
{
	int i/*n = 50*/;
	int a[50];
	float b[50];
	//float min, max;
	//min = 32000.0;
	//max = -32000.0;
	for (i = 0; i < 50; i++)
	{
		a[i] = i + 1;
		printf("%i ", a[i]);
	}
	printf("\n");
	ctg(a, b);
	//printf("%f ", b[i]);

	/*for (i = 0; i <= 50; i++)
	{
		ctg (i);
		if (ctg(i) < min)
			min = ctg(i);
		else if (ctg(i) > max)
			max = ctg(i);
	}
	printf("min = %f, max = %f\n", min, max);*/
}