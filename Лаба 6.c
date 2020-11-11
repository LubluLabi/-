#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996) - scanf
int main() 
{
    int** mas, n;
    scanf("%d", &n);
    mas = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mas[i] = (int*)malloc(n * sizeof(int));
    int m = n, num = 1;
    for (int j = 0; j < m; j++) 
    {
        for (int i = j; i < m; i++) 
        {
            mas[j][i] = num;
            num++;
        }
        for (int i = j + 1; i < m; i++) 
        {
            mas[i][m - 1] = num;
            num++;
        }
        for (int i = m - 2; i >= j; i--) 
        {
            mas[m - 1][i] = num;
            num++;
        }
        for (int i = m - 2; i >= j + 1; i--) 
        {
            mas[i][j] = num;
            num++;
        }
        m--;
    }
    for (int l = 0; l < n; l++) 
    {
        for (int k = 0; k < n; k++) 
        {
            printf("%4d", mas[l][k]);
            if (k != n - 1) 
                printf("");
        }
        if (l != n - 1) 
            printf("\n");
    }
    return 0;
}