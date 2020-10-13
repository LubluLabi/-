#pragma warning(disable : 4996) - scanf
#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, f, i, sum = 0, kol = 0;
	printf("Введите натуральное число n = ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Целое число: ");
		scanf("%d", &f);
		if (f % 5 == 0 && f % 7 != 0)
		{
			kol++;
			sum += f;
		}
	}
	printf("Количество чисел: %d\n", kol);
	printf("Сумма чисел: %d\n", sum);
	return 0;
}
