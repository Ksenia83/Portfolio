#include <stdio.h>
#include <math.h>

main()
{
	int a, b;
	printf("������ ��ࢮ� 楫�� ������⥫쭮� �᫮ ");
	scanf("%i", &a);
	printf("������ ��஥ 楫�� ������⥫쭮� �᫮ ");
	scanf("%i", &b);
	(a == pow(b, 2) || b == pow(a, 2)) ? printf("���� �᫮ ���� �����⮬ ��㣮��") : printf("���� �᫮ �� ���� �����⮬ ��㣮��");
}