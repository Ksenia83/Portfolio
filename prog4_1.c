#include <stdio.h>

main()
{
	int a, b, min;
	printf("������ �᫮ ");
	scanf("%i", &a);
	min = a;
	for (b = 2; b <= a; b++)
		if (a % b == 0 && b < min)
			min = b;
		printf("%i �������訩 ����⥫� �᫠ %i\n", min, a);
}