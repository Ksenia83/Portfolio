#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
	
main()
{
	int i;
	char b[20];
	struct people
	{
		char name[20];
		char surname[30];
	};
	//struct people b = {"", ""};
	struct people a[] = {{"�������", "������"}, 
						{"����ᠭ��", "��誨�"}, 
						{"����ᠭ��", "����"},
						{"����", "��������"},
						{"�ࠩ��", "��୨���"},
						{"������", "����"},
						{"����ᠭ��", "������"},
						{"���⮫��", "�론���"},
						{"����", "�ᯥ�᪨�"},
						{"��᫠�", "��襪"}};
	printf("������ ���: ");
	scanf("%s", &b);
	for (i = 0; i < 10; i++)
	{
		if (strcmp(b, a[i].name) == 0)
			printf("%s %s\n", a[i].name, a[i].surname);
	}
	//printf("%s\n", a[i].name);
}