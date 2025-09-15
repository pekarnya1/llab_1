#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("моя программа");
	puts("нажмите enter для продложения");
	getchar();
	return 0;
}