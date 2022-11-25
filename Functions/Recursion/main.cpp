#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void fibonacci1(int n, int a = 1, int b = 1);
void fibonacci2(int n, int i = 0, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	cout << "Hello Recursion" << endl;
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a, n;
	cout << "������� ��������� � ���������� �������: "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	fibonacci2(n);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����" << endl;
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����" << endl;
}

/*
	Stack (������) - ��� ������� ������, �� ������� ��������� ���������� ������� ����������� ������.
	Stack overflow exception
*/

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/

	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(double a, int n)
{
	/*if (n == 0)return 1;	//����� ����� � ������� ������� = 1
	else if (n < 0)return 1 / a * power(a, n + 1);
	else return a * power(a, n - 1);*/

	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}
void fibonacci1(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	fibonacci1(n, b, a + b);
}
void fibonacci2(int n, int i, long long int a, long long int b)
{
	if (i > n)return;
	cout << i << "\t" << a << "\n";
	fibonacci2(n, i + 1, b, a + b);
}