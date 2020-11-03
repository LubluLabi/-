#include<stdio.h> 
#pragma warning(disable : 4996) - scanf 
#include <locale.h> 
#include <conio.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int mas[7][8];
	int i, j, nech = 0, k=0;
	printf("Введите 0 для рандома\nВведите 1 для ввода самим\n");
	scanf("%d", &k);
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (k == 0)
				mas[i][j] = rand();
			else
			{
				printf("Введите элементы [%d][%d]", i, j);
				scanf("%d", &mas[i][j]);
				printf("\n");
			}
		}
	}
	printf("Массив\n");
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d ", mas[i][j]);
		}
		printf("\n");
			
	}
	for (j = 0; j < 8; j++)
	{
		nech = 0;
		for (i = 0; i < 7; i++)
		{
			if (mas[i][j] % 2 != 0)
				nech++;
		}
		printf("Нечетные %d\n", nech);
	}
	return 0;
}
