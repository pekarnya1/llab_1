#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("* * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*                                         *");
	puts("*         Выполнил Гапонов В. Ю.          *");
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