#include<stdio.h>
#include <string.h> // ���������� ��� ������ strlen'a
#include <locale.h>
#pragma warning(disable : 4996) - scanf
int main(void)
{
    setlocale(LC_ALL, "Rus");
    char str[128];
    int i, count = 0;
    float sr, slova, k;
    printf("������� �����: ");
    gets_s(str); // ��������� ���-�� �������� � �������� �� � ������
    printf("���������� ��������: %zd \n", strlen (str)); // ������� ���-�� ��������
    printf("������� ������������ ���������� ��������: ");
    scanf("%f", &k);
    for (i = 0; str[i]; i++) // �������� �� ������� �� ������ � �� �����
        if (str[i] == ' ') count++; // ��������� ������� � ������� ��, ��������� � count
    slova = count + 1; // ����� ��������� 1� ��������, � ���� ������ ������ �� 1, ��� ��������
    sr = (k - count) / slova; // ������� ������� ���-�� ��������
    printf("������� ����� ����: %f \n", sr);
    return 0;
}