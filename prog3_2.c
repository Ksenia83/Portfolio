#include <stdio.h>   // ������砥� �⠭������ ������⥪� �����-�뢮��

main()
{
	int a, b;   // ���塞 ��� 楫��᫥��� ��६����
	printf("������ ��ࢮ� 楫�� ������⥫쭮� �᫮ ");   //����訢��� � ���짮��⥫� ��ࢮ� 楫�� ������⥫쭮� �᫮
	scanf("%i", &a);   //���뢠�� ��������� ���짮��⥫�� �᫮ � ��࠭塞 ��� � ��६����� �
	printf("������ ��஥ 楫�� ������⥫쭮� �᫮ ");   // ����訢��� � ���짮��⥫� ��஥ 楫�� ������⥫쭮� �᫮
	scanf("%i", &b);   // ���뢠�� ��������� ���짮��⥫�� ��஥ �᫮ � ��࠭塞 ��� � ��६����� b
	if (a % b == 0)   // �஢��塞 ������� �� ��ࢮ� �᫮ �� ��஥, �᫨ �������
		printf("��୮ �⢥ত����, �� ��ࢮ� �᫮ ������� �� ��஥");   // �뢮��� ᮮ�饭�� � �������� ��ࢮ�� �᫠ �� ��஥
	else if (b % a == 0)   // �᫨ ��ࢮ� �᫮ �� ��஥ �� �������, �஢��塞 ������� �� ��஥ �᫮ �� ��ࢮ�, �᫨ �������
		printf("��୮ �⢥ত����, �� ��஥ �᫮ ������� �� ��ࢮ�");   // �뢮��� ᮮ�饭�� � �������� ��ண� �᫠ �� ��ࢮ�
	else                                                                // ����
		printf("�⢥ত����, �� ���� �᫮ ������� �� ��㣮� ����୮");   // �뢮��� ᮮ�饭�� � ⮬, �� ���� �᫮ �� ��㣮� �� �������
}