#include <stdio.h>
#include <string.h>

main()
{
	int i;
	char a[19] = {0};
	printf("Введите слово: ");
	scanf("%s", a);
	for (i = 0; i < 19; i++)
		if (a[i] != '\0')
			printf("%c\n", a[i]);	
}