#include <stdio.h>

main()
{
	int a, b;
	printf("������ �᫮ ");
	scanf("%i", &a);
	b = 2;
	while (a % b != 0)
		b++;
	printf("%i �������訩 ����⥫� �᫠ %i\n", b, a);
}