#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("��� ���������");
	puts("������� enter ��� �����������");
	getchar();
	return 0;
}