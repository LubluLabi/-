#pragma warning(disable : 4996) - scanf 
#include<stdio.h> 
#include <locale.h> 
#define M 1000
int main()
{
	setlocale(LC_ALL, "Rus");
	int mas[M];
	int i, n, next;
	printf("Razmer ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("mas[%d] ", i);
		scanf("%d", &mas[i]);
	}
	for (i = 0; i < n; i++)
		printf("%d \n", mas[i]);
	for (i = 0; i < n; i++)
	{
		int j = i + 1;
		while (mas[j] <= mas[i] && j < n)
			j++;
		if (j == n)
			mas[i] = 0;
		else mas[i] = mas[j];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", mas[i]);
	}
	return 0;
}