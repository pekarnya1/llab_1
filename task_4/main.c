#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("* * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                         *");
	puts("* ����: ���������� ����������� ���������� *");
	puts("*                                         *");
	puts("*         �������� ������� �. �.          *");
	puts("*                                         *");
	puts("* * * * * * * * * * * * * * * * * * * * * *");
}
void date()
{
	puts("* * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                         *");
	puts("* ---   ---     ---   ---    ---   ---    *");
	puts("*    | |   |   |   | |   |  |   |     |   *");
	puts("* ---   ---|   |   |  ---   |   |     |   *");
	puts("*|         |   |   | |   |  |   |     |   *");
	puts("* ---   --- *   ---   --- *  ---      |   *");
	puts("*                                         *");
	puts("* * * * * * * * * * * * * * * * * * * * * *");
}

void main()
{
	name();
	date();
}