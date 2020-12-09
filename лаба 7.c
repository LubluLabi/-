#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <clocale>
#pragma warning(disable : 4996) - scanf
int main()
{
	setlocale(LC_ALL, "Rus");
	char* s = NULL;
	int i, n;
	printf("Размер: ");
	scanf("%d", &n);
	s = ( char*)malloc(n*sizeof(char));
	printf("Вводите текст: ");
	rewind(stdin);
	gets_s(s, n);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '.')
		{
			s[i+2] = s[i+2] - 32;
		}
		printf("%c", s[i]);
	}
	getchar();
	return 0;
}
