#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//define - ����������
//definition - �����������
//#define SWITCH_SYNTAX

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif // TARGET

#if defined CALC_1	//������ �����
//���� ���������� CALC_1, �� ������������� ���, �� ��������� #endif,
//����� ����� �����������
	double a, b;	//�����, �������� � ����������
	char s;			//Sign - ���� ��������
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation!" << endl;
	}
#endif				//����� �����

#ifdef SWITCH_SYNTAX
	int var = 0;
	int code1 = 0;
	int code2 = 0;
	int codeN = 0;
	int default_code = 0;
#define CONST_1	1
#define CONST_2	2
#define CONST_N	'N'


	//����������� �������������� ������ switch
	//if, ������� ��������� ������� ���� �� ���� ��������� ����, � ����������� �� �������,
	//switch ��������� ������� ���� �� ��������� ��������� ����, � ����������� �� �������� ��������� ����������.


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//........................
		//........................
	case CONST_N: codeN; break;
	default: default_code;
	}
#endif // SWITCH_SYNTAX


}