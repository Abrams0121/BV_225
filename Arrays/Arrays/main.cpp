#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 15;
	int arr[SIZE] = { 3, 5, 8 };
	//arr[3] = 123;	//���������� � �������� ������� �� ������
	//cout << arr[3] << endl;//��������� � �������� ������� �� ������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}