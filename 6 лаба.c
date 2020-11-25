#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996) - scanf
int main()
{
	system("chcp 1251");
	system("cls");
	printf("Введите количество строк*столбец: ");
	int n;
	scanf("%d", &n);
	int** a = (int**)malloc(n * sizeof(int));
	int* m = (int*)malloc(n * n * sizeof(int));
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(n * sizeof(int));
	}
	int j;
	int t = 1, i = 0, v = 0, s = 0, r = 1, l = 1, c = 0, d = 0;
	int f = n;
	while (t <= n * n)
	{
		for (j = s; j < f; j++) //заполняем справа на лево
		{
			t++;
			scanf("%d", &a[i][j]);
			m[k] = a[i][j]; 
			k++;

		}
		v = j - 1;
		j--;
		if (t <= n * n) //заполняем с верху вниз
		{
			for (i = r; i < f; i++)
			{
				t++;
				scanf("%d", &a[i][j]);
				m[k] = a[i][j]; 
				k++;
			}
			l = i - 1;
			i--;
		}
		if (t <= n * n) //заполняем с лева на право
		{
			for (j = v - 1; j >= c; j--)
			{
				t++;
				scanf("%d", &a[i][j]);
				m[k] = a[i][j]; 
				k++;
			}
		}
		if (t <= n * n)
		{
			for (i = l - 1; i > d; i--) //заполняем с низу верх
			{
				t++;
				scanf("%d", &a[i][j + 1]);
				m[k] = a[i][j + 1]; 
				k++;
			}
		}
		f--; //уменшаем параметры матрицы(что бы числа шли внутрь а не заполнялись поверх тех которы уже заполнены)
        s++;
		r++;
		c++;
		d++;
		i++;
	}
	for (int l = 0; l < n * n; l++)
	{
		printf("%3d ", m[l]);
		if ((l + 1) % n == 0)printf("\n");
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	getchar(); getchar();
	return 0;
}