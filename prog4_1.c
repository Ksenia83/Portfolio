#include <stdio.h>

main()
{
	int a, b, min;
	printf("Введите число ");
	scanf("%i", &a);
	min = a;
	for (b = 2; b <= a; b++)
		if (a % b == 0 && b < min)
			min = b;
		printf("%i наименьший делитель числа %i\n", min, a);
}