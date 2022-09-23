#include<iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int n;
	double f = 1;	//Factorial
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << "! = " << f << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//��������� ������� - ��� �����, ������� ���������� ���� �� ����.
	int n;	//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");	//�������� ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "��� � �������� �����" << endl;
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;	//������������, ��� ����� �������,
		//�� ��� ����� ���������:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
}