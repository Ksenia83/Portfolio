#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i;
	float a, max, min;
	min = 32000.0;
	max = -32000.0;
	i = 1;
	while (i <= 50) {
		a = cos (2 * 3.14 * i / 50 + 3.14 / 2) / sin (2 * 3.14 * i / 50 + 3.14 / 2);
		if (a < min) 
			min = a;
		else if (a > max) 
			max = a;
		i++;
	}
	printf("%f �������襥 ���祭�� �㭪樨 ��� 楫�� ��㬥�⮢ �� 1 �� 50\n", min);
	printf("%f �������襥 ���祭�� �㭪樨 ��� 楫�� ��㬥�⮢ �� 1 �� 50\n", max);
}