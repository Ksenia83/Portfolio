#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i;
	float a, max, min;
	min = 32000.0;
	max = -32000.0;
	for (i = 1; i <= 50; i++) {
		a = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
		if (a < min) 
			min = a;
		else if (a > max) 
			max = a;
	}
	printf("%f наименьшее значение функции для целых аргументов от 1 до 50\n", min);
	printf("%f наибольшее значение функции для целых аргументов от 1 до 50\n", max);
}