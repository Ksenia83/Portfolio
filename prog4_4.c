#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i, j;
	double a, max, min;
	min = 32000.0;
	max = -32000.0;
	i = 1;
	while (i <= 50) {
		j = 1;
		while (j <= 50) {
			a = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
			if (a < min) 
				min = a;
			else if (a > max) 
				max = a;
			if (ceil(((cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2)) - min) * 50 / (max - min)) == 50 - j)
				printf("*");
			else
				printf(" ");
			j++;
		}
		i++;
	}
	//printf("%d наименьшее значение функции для целых аргументов от 1 до 50\n", min);
	//printf("%d наибольшее значение функции для целых аргументов от 1 до 50\n", max);
}