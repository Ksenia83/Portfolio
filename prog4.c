#include <stdio.h>

main()
{
	int a, b;
	printf("Введите число ");
	scanf("%i", &a);
	b = 2;
	while (a % b != 0)
		b++;
	printf("%i наименьший делитель числа %i\n", b, a);
}