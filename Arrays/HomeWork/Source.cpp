#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;


void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int const SIZE = 10;
	int arr[SIZE];
	int menu, min = 0, max = 0, summa = 0;
	double midle = 0;
	cout << "������ ��������� ������ ������, ���� ������� 1, �� ��������� ����� ����� � ������, � ���� 2 �� ������ ����������� ������������� = "; cin >> menu;
	switch (menu)
	{
	case 1:
		for (size_t i = 0; i < SIZE; i++)//����
		{
			system("cls");
			cout << "������� �������� ��� arr[" << i << "] = "; cin >> arr[i];
		}cout << endl;
		//for (size_t i = 0; i < SIZE; i++)//�����
		//{
		//	cout << "arr[" << i << "] = " << arr[i] << "\t";
		//}cout << endl;
		//Sleep(500);
		//for (size_t i = 1; i <= SIZE; i++)// �������� �����
		//{
		//	cout << "arr[" << SIZE - i << "] = " << arr[SIZE - i] << "\t";
		//}cout << endl;
		//Sleep(500);
		//for (size_t i = 0; i < SIZE; i++)
		//{
		//	summa = summa + arr[i];
		//}cout << endl;
		//cout << "����� ������� = " << summa << endl;;
		//midle = (double)summa / SIZE;
		//cout << "������� ���. = " << midle << endl;
		//min = arr[0];
		//for (size_t i = 1; i < SIZE; i++)
		//{
		//	if (min > arr[i])min = arr[i];
		//}
		//cout << "����������� ����� ������� = " << min;
		//max = arr[0];
		//for (size_t i = 1; i < SIZE; i++)
		//{
		//	if (max < arr[i])max = arr[i];
		//}
		//cout << "\n������������ ����� ������� = " << max;
		break;
	case 2:
		system("cls");
		for (size_t i = 0; i < SIZE; i++) // ��������� ����������
		{
			arr[i] = 1 + rand() % 10;
		}cout << endl;
	}
	for (size_t i = 0; i < SIZE; i++) // �����
	{
		cout << "arr[" << i << "] = " << arr[i] << "\t";
	}cout << endl;
	Sleep(500);
	for (size_t i = 1; i <= SIZE; i++)// �������� �����
	{
		cout << "arr[" << SIZE - i << "] = " << arr[SIZE - i] << "\t";
	}cout << endl;
	Sleep(500);
	for (size_t i = 0; i < SIZE; i++)
	{
		summa = summa + arr[i];

	}cout << endl;
	cout << "����� ������� = " << summa << endl;
	midle = (double)summa / (double)SIZE;
	cout << "������� ���. = " << midle << endl;
	min = arr[0];
	for (size_t i = 1; i < SIZE; i++)
	{
		if (min > arr[i])min = arr[i];
	}
	cout << "����������� ����� ������� = " << min;
	max = arr[0];
	for (size_t i = 1; i < SIZE; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	cout << "\n������������ ����� ������� = " << max;
	_getch();
}