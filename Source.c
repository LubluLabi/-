#include<stdio.h>
#include <string.h> // библиоиека дл€ работы strlen'a
#include <locale.h>
#pragma warning(disable : 4996) - scanf
int main(void)
{
    setlocale(LC_ALL, "Rus");
    char str[128];
    int i, count = 0;
    float sr, slova, k;
    printf("¬ведите слова: ");
    gets_s(str); // считывает кол-во символов и помещает их в массив
    printf(" оличество символов: %zd \n", strlen (str)); // выводит кол-во символов
    printf("¬ведите подсчитанное количество символов: ");
    scanf("%f", &k);
    for (i = 0; str[i]; i++) // проходим по массиву от начала и до конца
        if (str[i] == ' ') count++; // исключаем пробелы и считаем их, записыва€ в count
    slova = count + 1; // слова разделены 1м пробелом, а слов всегда больше на 1, чем пробелов
    sr = (k - count) / slova; // считаем среднее кол-во символов
    printf("—редн€€ длина слов: %f \n", sr);
    return 0;
}