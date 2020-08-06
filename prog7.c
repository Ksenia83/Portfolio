#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ctg (int i)
{
	float a;
	a = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
	return a;
}

main()
{
	int i;
	float min, max;
	min = 32000.0;
	max = -32000.0;
	for (i = 0; i <= 50; i++)
	{
		ctg (i);
		if (ctg(i) < min)
			min = ctg(i);
		else if (ctg(i) > max)
			max = ctg(i);
	}
	printf("min = %f, max = %f\n", min, max);
}