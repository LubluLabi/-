// ������� 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define _CRT_OBSOLETE_NO_WARNINGS
#pragma warning(disable : 4996)

void search_name1(char* name, int size, struct glaw* lib);
void search_fam1(char* lastname, int size, struct glaw* lib);
void search_otchestw1(char* otchestwo, int size, struct glaw* lib);
void search_all(char* name, char* lastname, char* otchestwo, int size, struct glaw* lib);
void partial_match_search(struct glaw* lib, char* name, int size);

void sort_name1(struct glaw* lib, int n);
void sort_fam1(struct glaw* lib, int n);
void sort_otchestw1(struct glaw* lib, int n);

void izmenenie(struct glaw* lib, int size);
void delete_strukt(struct glaw* lib, int size);

void search_sem(struct glaw* lib, int size);
void max_ball_1(struct glaw* lib, int size);

struct glaw
{
	struct data
	{
		char lastname[30];
		char name[30];
		char name1[30];
		char otchestwo[30];
		int num_sem;
	}lab;
	union exams
	{
		int exams_num[5];
		int exams_rez[5];
		int exams_rez1[5];
	}lub;
}lib;

int main()
{
	setlocale(LC_ALL, "Rus");
	struct glaw* lib;
	int i, size;
	printf("\n��������� ��������: \n");
	scanf_s("%d", &size);
	lib = (struct glaw*)malloc(size * sizeof(struct glaw));
	for (i = 0; i < size; i++)
	{
		printf("\n����� ��������: \n");
		scanf_s("%d", &(lib + i)->lab.num_sem);
		if ((lib + i)->lab.num_sem == 1)
		{
			printf("%d)���: \n", i);
			rewind(stdin);
			gets_s((lib + i)->lab.name);

			printf("�������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.lastname);

			printf("��������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.otchestwo);

			printf("������� ������ �� 4 ���������: \n");
			//for (int j = 0; j < 3; j++)
			//{
			printf("����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
			printf("����������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
			printf("���������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
			//}
		}
		if ((lib + i)->lab.num_sem == 2)
		{
			printf("%d)���: \n", i);
			rewind(stdin);
			gets_s((lib + i)->lab.name);

			printf("�������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.lastname);

			printf("��������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.otchestwo);

			printf("������� ������ �� 5 ���������: \n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
			printf("����������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[4]);
			//}
		}
		if ((lib + i)->lab.num_sem == 3)
		{
			printf("%d)���: \n", i);
			rewind(stdin);
			gets_s((lib + i)->lab.name);

			printf("�������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.lastname);

			printf("��������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.otchestwo);

			printf("������� ������ �� 5 ���������: \n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("���: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
			printf("��: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
			printf("�����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
			printf("����������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[4]);
			//}
		}
		if ((lib + i)->lab.num_sem == 4)
		{
			printf("%d)���: \n", i);
			rewind(stdin);
			gets_s((lib + i)->lab.name);

			printf("�������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.lastname);

			printf("��������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.otchestwo);

			printf("������� ������ �� 5 ���������: \n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
			printf("���� ���: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
			printf("������������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
			printf("����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[4]);
			//}
		}
		if ((lib + i)->lab.num_sem == 5)
		{
			printf("%d)���: \n", i);
			rewind(stdin);
			gets_s((lib + i)->lab.name);

			printf("�������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.lastname);

			printf("��������: \n");
			rewind(stdin);
			gets_s((lib + i)->lab.otchestwo);

			printf("������� ������ �� 5 ���������: \n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
			printf("��������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
			printf("�������������: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
			printf("�����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
			printf("�����: ");
			scanf_s("%d", &(lib + i)->lub.exams_rez[4]);
			//}
		}
	}
	system("chcp 1251");
	system("cls");
	for (i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 1)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 3; j++)
			//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
			//}
			//printf("\n");
		}
	}
	for (i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 2)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
			printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
	}
	for (i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 3)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
			printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
			printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
	}
	for (i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 4)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========��������� �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
			printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
			printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
			printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
	}
	for (i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 5)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========����� �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
			printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
			printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
	}

	int k;
	char name[30];
	char otchestwo[30];
	char lastname[30];
	//char otchestwo[30];
	do
	{
		printf("1 - ����� �� �����\n2 - ����� �� �������\n3 - ����� �� ���������\n4 - ���������� �� �����\n5 - ���������� �� �������\n6 - ���������� �� ��������\n7 - ��������� ���������\n8 - �������� ���������\n9 - ����� �� ���� �����\n10 - ����� �� ������ ����\n11 - Max ����\n");
		if (!(scanf_s("%d", &k)))
			return 0;
		switch (k)
		{
		case 0:
			exit(0);
			break;
		case 1:
			printf("\n����� �� �����\n");
			rewind(stdin);
			gets_s(name);
			search_name1(name, size, lib);
			break;
		case 2:
			rewind(stdin);
			gets_s(lastname);
			search_fam1(lastname, size, lib);
			break;
		case 4:
			sort_name1(lib, size);
			for (i = 0; i < size; i++)
			{
				if ((lib + i)->lab.num_sem == 1)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 3; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
					printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 2)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 3)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 4)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========��������� �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 5)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========����� �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
			}
			break;
		case 5:
			sort_fam1(lib, size);
			for (i = 0; i < size; i++)
			{
				if ((lib + i)->lab.num_sem == 1)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 3; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
					printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 2)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 3)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 4)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========��������� �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 5)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========����� �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
			}
			break;
		case 6:
			sort_otchestw1(lib, size);
			for (i = 0; i < size; i++)
			{
				if ((lib + i)->lab.num_sem == 1)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 3; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
					printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 2)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 3)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========������ �������=======\n");
					//for (int j = 0; j < 5; j++)
					//{
					printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
					//}
					//printf("\n");
				}
				if ((lib + i)->lab.num_sem == 4)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========��������� �������=======\n");

					printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
					printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
					printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
					printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				}
				if ((lib + i)->lab.num_sem == 5)
				{
					printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
					printf("\n========����� �������=======\n");

					printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
					printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
					printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
					printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
				}
			}
			break;
		case 7:
			izmenenie(lib, size);
			break;
		case 8:
			delete_strukt(lib, size);
			break;
		case 9:
			printf("\n���\n");
			rewind(stdin);
			gets_s(name);
			printf("\n�������\n");
			rewind(stdin);
			gets_s(lastname);
			printf("\n��������\n");
			rewind(stdin);
			gets_s(otchestwo);
			search_all(name, lastname, otchestwo, size, lib);
			break;
		case 100:
			rewind(stdin);
			gets_s(name);
			partial_match_search(lib, name, size);
			break;
		case 10:
			search_sem(lib, size);
			break;
		case 11:
			max_ball_1(lib, size);
			break;
		default:
			printf("\n�� �� ���� ���...\n");
			break;
		}
	} while (k != 'q');
}

void search_name1(char* name, int size, struct glaw* lib)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(name, (lib + i)->lab.name) == 0)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 2)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 3)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 4)
			{
				printf("\n========��������� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 5)
			{
				printf("\n========����� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
		}
	}

}

void search_fam1(char* lastname, int size, struct glaw* lib)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(lastname, (lib + i)->lab.lastname) == 0)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 2)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 3)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 4)
			{
				printf("\n========��������� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 5)
			{
				printf("\n========����� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
		}
	}
}

void search_otchestw1(char* otchestwo, int size, struct glaw* lib)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(otchestwo, (lib + i)->lab.otchestwo) == 0)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 2)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 3)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 4)
			{
				printf("\n========��������� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 5)
			{
				printf("\n========����� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
		}
	}
}

void sort_name1(struct glaw* lib, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i - 1; k++)
		{
			if (strcmp((lib + k)->lab.name, (lib + k + 1)->lab.name) > 0)
			{
				glaw tmp = lib[k];
				lib[k] = lib[k + 1];
				lib[k + 1] = tmp;
			}
		}
	}

}

void sort_fam1(struct glaw* lib, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i - 1; k++)
		{
			if (strcmp((lib + k)->lab.lastname, (lib + k + 1)->lab.lastname) > 0)
			{
				glaw tmp = lib[k];
				lib[k] = lib[k + 1];
				lib[k + 1] = tmp;
			}
		}
	}

}

void sort_otchestw1(struct glaw* lib, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i - 1; k++)
		{
			if (strcmp((lib + k)->lab.otchestwo, (lib + k + 1)->lab.otchestwo) > 0)
			{
				glaw tmp = lib[k];
				lib[k] = lib[k + 1];
				lib[k + 1] = tmp;
			}
		}
	}

}

void izmenenie(struct glaw* lib, int size)
{
	printf("������� ����� ���������: ");
	int n, s;
	scanf_s("%d", &n);
	for (int i = 0; i < size; i++)
	{
		if ((lib + i) == (lib + n))
		{
			printf("������� ��� ������ ��������: \n");
			printf("0 - ������\n1 - ���\n2 - �������\n3 - ��������\n");
			scanf_s("%d", &s);
			switch (s)
			{
			case 0:
					if ((lib + i)->lab.num_sem == 1)
					{
						printf("����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez1[0]);
						printf("����������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez1[1]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez1[2]);
						printf("���������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez1[3]);

						for (int i = 0; i < size; i++)
						{
							(lib + i)->lub.exams_rez[0] = (lib + i)->lub.exams_rez1[0];
							(lib + i)->lub.exams_rez[1] = (lib + i)->lub.exams_rez1[1];
							(lib + i)->lub.exams_rez[2] = (lib + i)->lub.exams_rez1[2];
							(lib + i)->lub.exams_rez[3] = (lib + i)->lub.exams_rez1[3];
						}
						for (i = 0; i < size; i++)
						{
							if ((lib + i)->lab.num_sem == 1)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 3; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
								printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 2)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 3)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 4)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========��������� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 5)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========����� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
						}
					}
					if ((lib + i)->lab.num_sem == 2)
					{
						printf("����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
						printf("����������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[4]);

						for (int i = 0; i < size; i++)
						{
							(lib + i)->lub.exams_rez[0] = (lib + i)->lub.exams_rez1[0];
							(lib + i)->lub.exams_rez[1] = (lib + i)->lub.exams_rez1[1];
							(lib + i)->lub.exams_rez[2] = (lib + i)->lub.exams_rez1[2];
							(lib + i)->lub.exams_rez[3] = (lib + i)->lub.exams_rez1[3];
							(lib + i)->lub.exams_rez[4] = (lib + i)->lub.exams_rez1[4];
						}
						for (i = 0; i < size; i++)
						{
							if ((lib + i)->lab.num_sem == 1)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 3; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
								printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 2)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 3)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 4)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========��������� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 5)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========����� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
						}
					}
					if ((lib + i)->lab.num_sem == 3)
					{
						printf("���: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
						printf("��: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
						printf("�����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
						printf("����������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[4]);

						for (int i = 0; i < size; i++)
						{
							(lib + i)->lub.exams_rez[0] = (lib + i)->lub.exams_rez1[0];
							(lib + i)->lub.exams_rez[1] = (lib + i)->lub.exams_rez1[1];
							(lib + i)->lub.exams_rez[2] = (lib + i)->lub.exams_rez1[2];
							(lib + i)->lub.exams_rez[3] = (lib + i)->lub.exams_rez1[3];
						}
						for (i = 0; i < size; i++)
						{
							if ((lib + i)->lab.num_sem == 1)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 3; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
								printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 2)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 3)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 4)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========��������� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 5)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========����� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
						}
					}
					if ((lib + i)->lab.num_sem == 4)
					{
						printf("����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
						printf("���� ���: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
						printf("������������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
						printf("����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[4]);

						for (int i = 0; i < size; i++)
						{
							(lib + i)->lub.exams_rez[0] = (lib + i)->lub.exams_rez1[0];
							(lib + i)->lub.exams_rez[1] = (lib + i)->lub.exams_rez1[1];
							(lib + i)->lub.exams_rez[2] = (lib + i)->lub.exams_rez1[2];
							(lib + i)->lub.exams_rez[3] = (lib + i)->lub.exams_rez1[3];
						}
						for (i = 0; i < size; i++)
						{
							if ((lib + i)->lab.num_sem == 1)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 3; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
								printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 2)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 3)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 4)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========��������� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 5)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========����� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
						}
					}
					if ((lib + i)->lab.num_sem == 5)
					{
						printf("������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[0]);
						printf("��������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[1]);
						printf("�������������: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[2]);
						printf("�����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[3]);
						printf("�����: ");
						scanf_s("%d", &(lib + i)->lub.exams_rez[4]);

						for (int i = 0; i < size; i++)
						{
							(lib + i)->lub.exams_rez[0] = (lib + i)->lub.exams_rez1[0];
							(lib + i)->lub.exams_rez[1] = (lib + i)->lub.exams_rez1[1];
							(lib + i)->lub.exams_rez[2] = (lib + i)->lub.exams_rez1[2];
							(lib + i)->lub.exams_rez[3] = (lib + i)->lub.exams_rez1[3];
						}
						for (i = 0; i < size; i++)
						{
							if ((lib + i)->lab.num_sem == 1)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 3; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
								printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 2)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 3)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========������ �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 4)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========��������� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
								printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
								printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
								printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
							if ((lib + i)->lab.num_sem == 5)
							{
								printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
								printf("\n========����� �������=======\n");
								//for (int j = 0; j < 5; j++)
								//{
								printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
								printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
								printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
								printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
								//}
								//printf("\n");
							}
						}
					}
				break;
			case 1:
				rewind(stdin);
				gets_s((lib + i)->lab.name1);
				for (int i = 0; i < size; i++)
				{
						if (strcmp((lib + n)->lab.name, (lib + n)->lab.name) == NULL)
							strcpy((lib + n)->lab.name, (lib + n)->lab.name1);
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 1)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 3; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
						printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 2)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 3)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 4)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========��������� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 5)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========����� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				break;
			case 2:
				rewind(stdin);
				gets_s((lib + i)->lab.name1);
				for (int i = 0; i < size; i++)
				{
					if (strcmp((lib + n)->lab.lastname, (lib + n)->lab.lastname) == NULL)
						strcpy((lib + n)->lab.lastname, (lib + n)->lab.name1);
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 1)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 3; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
						printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 2)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 3)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 4)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========��������� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 5)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========����� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}break;
			case 3:
				rewind(stdin);
				gets_s((lib + i)->lab.name1);
				for (int i = 0; i < size; i++)
				{
					if (strcmp((lib + n)->lab.otchestwo, (lib + n)->lab.otchestwo) == NULL)
						strcpy((lib + n)->lab.otchestwo, (lib + n)->lab.name1);
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 1)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 3; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
						printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 2)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 3)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========������ �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 4)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========��������� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
						printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
						printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
						printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}
				for (i = 0; i < size; i++)
				{
					if ((lib + i)->lab.num_sem == 5)
					{
						printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
						printf("\n========����� �������=======\n");
						//for (int j = 0; j < 5; j++)
						//{
						printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
						printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
						printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
						printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
						//}
						//printf("\n");
					}
				}break;
			default:
				break;

			}
		}
	}
}

void delete_strukt(struct glaw* lib, int size)
{
	printf("������� ����� ��������� ");
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < size; i++)
	{
		if ((lib + i) == (lib + n))
		{
			*(lib + i) = *(lib + i - 100);
		}
	}
	printf("\n---------------------------------\n");
	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 1)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 3; j++)
			//{
			printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
			printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
			printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
			//}
			//printf("\n");
		}
		if ((lib + i)->lab.num_sem == 2)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
			printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
		if ((lib + i)->lab.num_sem == 3)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========������ �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
			printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
			printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
		if ((lib + i)->lab.num_sem == 4)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========��������� �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
			printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
			printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
			printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
			printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
		if ((lib + i)->lab.num_sem == 5)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			printf("\n========����� �������=======\n");
			//for (int j = 0; j < 5; j++)
			//{
			printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
			printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
			printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
			printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
			//}
			//printf("\n");
		}
	}
}

void search_all(char* name, char* lastname, char* otchestwo, int size, struct glaw* lib)
{
	for (int i = 0; i < size; i++)
	{
		if ((strcmp(name, (lib + i)->lab.name) == 0) || (strcmp(lastname, (lib + i)->lab.lastname) == 0) || (strcmp(otchestwo, (lib + i)->lab.otchestwo) == 0))
		{
			printf("-----------------------------------");
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 2)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 3)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 4)
			{
				printf("\n========��������� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 5)
			{
				printf("\n========����� �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
		}
	}
}

void partial_match_search(struct glaw* lib, char* name, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(name, (lib + i)->lab.name) == 0)
			name = (lib + i)->lab.name;
		name++;
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
		}
	}
}

void search_sem(struct glaw* lib, int size)
{
	int numer;
	puts("������� ����� ��������");
	scanf_s("%d", &numer);
	for (int i = 0; i < size; i++)
	{
		if (numer == (lib + i)->lab.num_sem)
		{
			if ((lib + i)->lab.num_sem == 1)
			{
				printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 3; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[2]);
				printf("���������:     %d \n", (lib + i)->lub.exams_rez[3]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 2)
			{
				printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[1]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[2]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 3)
			{
				printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
				printf("\n========������ �������=======\n");
				//for (int j = 0; j < 5; j++)
				//{
				printf("���:           %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��:            %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����������:    %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
				//}
				//printf("\n");
			}
			if ((lib + i)->lab.num_sem == 4)
			{
				printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
				printf("\n========��������� �������=======\n");

				printf("����:          %d \n", (lib + i)->lub.exams_rez[0]);
				printf("���� ���:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("������������:  %d \n", (lib + i)->lub.exams_rez[2]);
				printf("����:          %d \n", (lib + i)->lub.exams_rez[3]);
				printf("������:        %d \n", (lib + i)->lub.exams_rez[4]);
			}
			if ((lib + i)->lab.num_sem == 5)
			{
				printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
				printf("\n========����� �������=======\n");

				printf("������:        %d \n", (lib + i)->lub.exams_rez[0]);
				printf("��������:      %d \n", (lib + i)->lub.exams_rez[1]);
				printf("�������������: %d \n", (lib + i)->lub.exams_rez[2]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[3]);
				printf("�����:         %d \n", (lib + i)->lub.exams_rez[4]);
			}
		}
	}
}

void max_ball_1(struct glaw* lib, int size)
{
	float sr_ball;
	float sr_ball2 = 0;
	float sr_ball3 = 0;
	float sr_ball4 = 0;
	float sr_ball5 = 0;

	float sr_sem;

	float max = 0;

	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 1)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			//printf("\n========������ �������=======\n");
			sr_sem = (lib + i)->lub.exams_rez[0] + (lib + i)->lub.exams_rez[1] + (lib + i)->lub.exams_rez[2] + (lib + i)->lub.exams_rez[3];
			sr_ball = sr_sem / 4;
			if (sr_ball > max)
			{
				max = sr_ball;
			}
			printf("\n");
			printf("\n");
			printf("������� ���� 1 ���: %0.2f", sr_ball);
			printf("\n");
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 2)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			//printf("\n========������ �������=======\n");
			sr_sem = (lib + i)->lub.exams_rez[0] + (lib + i)->lub.exams_rez[1] + (lib + i)->lub.exams_rez[2] + (lib + i)->lub.exams_rez[3] + (lib + i)->lub.exams_rez[4];
			sr_ball2 = sr_sem / 5;
			if (sr_ball2 > max)
			{
				max = sr_ball2;
			}
			printf("\n");
			printf("\n");
			printf("������� ���� 2 ���: %0.2f", sr_ball2);
			printf("\n");
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 3)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			//printf("\n========������ �������=======\n");
			sr_sem = (lib + i)->lub.exams_rez[0] + (lib + i)->lub.exams_rez[1] + (lib + i)->lub.exams_rez[2] + (lib + i)->lub.exams_rez[3] + (lib + i)->lub.exams_rez[4];
			sr_ball3 = sr_sem / 5;
			if (sr_ball3 > max)
			{
				max = sr_ball3;
			}
			printf("\n");
			printf("\n");
			printf("������� ���� 3 ���: %0.2f", sr_ball3);
			printf("\n");
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 4)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			sr_sem = (lib + i)->lub.exams_rez[0] + (lib + i)->lub.exams_rez[1] + (lib + i)->lub.exams_rez[2] + (lib + i)->lub.exams_rez[3] + (lib + i)->lub.exams_rez[4];
			sr_ball4 = sr_sem / 5;
			if (sr_ball4 > max)
			{
				max = sr_ball4;
			}
			printf("\n");
			printf("\n");
			printf("������� ���� 4 ���: %0.2f", sr_ball4);
			printf("\n");
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((lib + i)->lab.num_sem == 5)
		{
			printf("\n%d) %3s %3s %3s\n", i, (lib + i)->lab.lastname, (lib + i)->lab.name, (lib + i)->lab.otchestwo);
			//printf("\n========����� �������=======\n");
			sr_sem = (lib + i)->lub.exams_rez[0] + (lib + i)->lub.exams_rez[1] + (lib + i)->lub.exams_rez[2] + (lib + i)->lub.exams_rez[3] + (lib + i)->lub.exams_rez[4];
			sr_ball5 = sr_sem / 5;
			if (sr_ball5 > max)
			{
				max = sr_ball5;
			}
			printf("\n");
			printf("������� ���� 5 ���:%0.2f", sr_ball5);
			printf("\n");
		}
	}
	printf("\n������������ �������� ���� ����� ���������: %0.2f\n", max);
}