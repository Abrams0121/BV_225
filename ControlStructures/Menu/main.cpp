


#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
enum Color { Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
enum Direction { Up = 72, Left = 75, Right = 77, Down = 80, Enter = 13, esc = 27, spase = 32 };
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//�������� ���������� ��������� ����

void SetColor(Color text, Color background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void SetCursor(int x, int y)
{
	COORD myCoords = { x,y };//�������������� ������������� ���������� ������ ���������
	SetConsoleCursorPosition(hStdOut, myCoords);
}
int menu();



int main()
{
	setlocale(LC_ALL, "RUS");
	int poz = 0;
	do
	{
		system("cls");
		poz = menu();
		system("cls");
		switch (poz)
		{
		case 0:
		{

			cout << "----��������� ��� �� �������� ����������----" << endl;
			int a;
			char Answer = 'Y';
			do {
				system("cls");
				cout << "������� ����� ������������� ����� ��� �������� ����� ������ ���������" << endl;


				do {

					cin >> a;
					if (a == 0 || a == 1)
					{

						cout << "��������� ����� ����� " << 1 << endl;


					}
					else if (a < 0)
					{
						cout << "�������� ������������� �����!! ��������� ����" << endl;

					}

				} while (a < 0);


				int b = 1;
				cout << a << endl;
				for (int i = 1; i < a + 1; i++)
				{
					b = b * i;

				}
				cout << b;

				Sleep(2000);
				system("cls");

				cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
			} while (Answer == 'Y' || Answer == 'y');
			break;
		}

		case 1:
		{
			cout << "---��������� ��� ���������� ����� � �������---" << endl;
			int a = 0, b = 0, c = 0;
			char Answer = 'Y';

			do
			{
				a = 0, b = 0, c = 0;
				cout << endl;
				cout << "������� ����� ������� ����� �������� � �������" << endl;
				cin >> a;
				cout << "������� ����� � ����� ������� �������� �����" << endl;
				cin >> b;

				c = a;
				for (int i = 1; i < b; i++)
				{
					c = c * a;
				}

				cout << c;
				cout << endl;



				cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
			} while (Answer == 'Y' || Answer == 'y');
			break;

		}

		case 2:
		{char Answer = 'Y';
		do {

			cout << "---��������� ��� ��������� ������� ASCII ���---" << endl;
			for (int i = 1; i <= 255; i++)
			{
				cout << "|" << (char)i << "|";
				if (i % 16 == 0)
				{
					cout << endl;
				}
			}


			cout << "\n������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}
		case 3:
		{	char Answer = 'Y';
		do {

			cout << "---��� ���������---" << endl;
			int a = 0; int b = 0; int c = 1; int pred = 0;
			do
			{
				cout << "������� ����� �� ������ ������� ������� " << endl;
				cin >> pred;
				if (pred < 0)
				{
					cout << "����� ������ 0 ������� ��� ���" << endl;
				}
			} while (pred < 0);

			do {


				a = b;
				b = c;
				c = a + b;
				if (a > pred)
				{
					break;
				}


				cout << a << " ";

			} while (true);
			cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;

		}


		case 4:
		{char Answer = 'Y';
		do {
			cout << "---��� ��������� � �������� ������---" << endl;
			int a = 0; int b = 0; int c = 1; int pred = 0;
			do
			{
				cout << "������� ����� ������� ������� ���� "; cin >> pred;
				if (pred < 0)
				{
					cout << "����� ������ 0 ������� ��� ���" << endl;
				}
			} while (pred < 0);

			for (int i = 0; i < pred; i++)
			{
				a = b;
				b = c;
				c = a + b;
				cout << a << " ";
			}
			cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}

		case 5:
		{char Answer = 'Y';
		do {
			cout << "---��� ������� ����� c ��������---" << endl;
			int a = 0, b = 0, c = 0;

			do
			{
				cout << "������� ������ �����" << endl; cin >> a;
				if (a < 0)
				{
					cout << "����� ������ 0 ������� ��� ���" << endl;
				}
			} while (a < 0);

			for (int i = 2; i < a; i++)
			{
				for (int j = 1; j < a; j++)
				{
					if (i % j == 0)
					{
						c++;
					}
				}
				if (c < 3)
				{
					b = i;
					cout << b << " ";
				}
				c = 0;
			}
			cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;

		}

		case 6:
		{char Answer = 'Y';
		do {
			cout << "---|��������� ��� ���������� �������|---";
			int comand = 0; // �������, �������� � ����������
			enum comande { go = 11, right = 10, left = 01, stop = 00 };
			int direction = 0;
			enum direction { N = 1, NE = 2, E = 3, SE = 4, S = 5, SW = 6, W = 7, NW = 8 };
			/*int direction = 0; enum direction{N=1,NE=12,E=2,SE=32,S=3,SW=34,W=4,NW=14};*/
			do //���� ���������� ��������� ������
			{
				cout << R"(������� �������������� ���������� ������:
1) N(N) - �����
2) NE(ne) - ������ ������
3) E(e) - ������
4) SE(se) - ��� ������
5) S(s) - ��
6) SW(sw) - ��� �����
7) W(w) - �����
8) NW(nw) - ������ �����)" << endl;
				cin >> direction;
				system("cls");
				if (direction == 1 || direction == 3 || direction == 5
					|| direction == 7 || direction == 2 || direction == 4 || direction == 6
					|| direction == 8) break;
				else cout << "�������� �������� ����������� ��������� ����" << endl;
			} while (true); // ���������� ����
			do
			{
				system("cls"); // ������� ������
				cout << R"(
����� ����� � ������� �������:
11- ��������� ������
10- ��������� �������
01- ��������� ������
00-������������
)";
				cin >> comand;
				switch (direction) // ����� ��� �����������
				{
					//���� ������� ����������� �����
				case 1:
					//case 'n':
					switch (comand) //����� ������� ������
					{
					case comande::go:  //case Go: //case 11:
						cout << "����� ������ ������ - �� �����!" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ������ ������!" << endl;
						direction = 2; //����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� ������ �����!" << endl;
						direction = 8; //����� ����������� ������
						break;
					case comande::stop:
						cout << "����� ����������� � ������� �� �����!" << endl;
						break;
					default:
						cout << "������������ ��������!" << endl;
						break;
					}
					break;
					//���� ������� ����������� ������ ������
				case 2:
					//case'ne':
					switch (comand)
					{
					case comande::go:
						cout << "����� ������ ������ - �� ������ ������" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ������" << endl;
						direction = 3;// ����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� �����" << endl;
						direction = 1;// ����� ��������� ������
						break;
					case comande::stop:
						cout << "����� ������������ � �������� �� ������ ������" << endl;
						break;
					default:
						cout << "����������� �������!" << endl;
						break;
					}
					break;
					//���� ������� ����������� ��
				case 5:
					//case 's':
					switch (comand) //����� ������� ������
					{
					case comande::go:  //case Go: //case 11:
						cout << "����� ������ ������ - �� ��!" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ��� �����!" << endl;
						direction = 6; //����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� ��� ������!" << endl;
						direction = 4; //����� ����������� ������
						break;
					case comande::stop:
						cout << "����� ����������� � ������� �� ��!" << endl;
						break;
					default:
						cout << "������������ ��������!" << endl;
						break;
					}
					break;
					//���� ������� ����������� ��� �����
				case 6:
					//case'sw':
					switch (comand)
					{
					case comande::go:
						cout << "����� ������ ������ �� ��� �����" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� �����" << endl;
						direction = 7;//����� �����������
						break;
					case comande::left:
						cout << "����� �������� �� ��" << endl;
						direction = 5;
						break;
					case comande::stop:
						cout << "����������� �������" << endl;
						break;
					}
					break;
					//���� ������� ����������� �����
				case 7:
					//case 'w':
					switch (comand) //����� ������� ������
					{
					case comande::go:  //case Go: //case 11:
						cout << "����� ������ ������ - �� �����!" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ������ �����!" << endl;
						direction = 8; //����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� ��� �����!" << endl;
						direction = 6; //����� ����������� ������
						break;
					case comande::stop:
						cout << "����� ����������� � ������� �� �����!" << endl;
						break;
					default:
						cout << "������������ ��������!" << endl;
						break;
					}
					break;
					//���� ������� ����������� ������ �����
				case 8:
					//case'nw':
					switch (comand)
					{
					case comande::go:
						cout << "����� ������ ������ �� ������ �����" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� �����" << endl;
						direction = 5;
						break;
					case comande::left:
						cout << "����� �������� �� �����" << endl;
						direction = 7;
						break;
					case comande::stop:
						cout << "����� ������������ � ������� �� ����� �����" << endl;
						break;
					default:
						cout << "����������� �������" << endl;
						break;
					}
					break;
					//���� ������� ����������� ��� ������
				case 4:
					//case'se':
					switch (comand) //������ ������� ������
					{
					case comande::go:
						cout << "����� ������ ������ �� ��� ������" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ��" << endl;
						direction = 5;//����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� ������" << endl;
						direction = 3;
						break;
					case comande::stop:
						cout << "����� ����������� � ������� �� ��� ������" << endl;
						break;
					default:
						cout << "����������� �������" << endl;
						break;
					}
					break;
					//���� ������� ����������� ������					
				case 3:
				case 'e':
					switch (comand) //����� ������� ������
					{
					case comande::go:  //case Go: //case 11:
						cout << "����� ������ ������ - �� ������!" << endl;
						break;
					case comande::right:
						cout << "����� �������� �� ��� ������!" << endl;
						direction = 4; //����� ����������� ������
						break;
					case comande::left:
						cout << "����� �������� �� ������ ������!" << endl;
						direction = 2; //����� ����������� ������
						break;
					case comande::stop:
						cout << "����� ����������� � ������� �� ������!" << endl;
						break;
					default:
						cout << "������������ ��������!" << endl;
						break;
					}
					break;
				}
				if (comand == comande::stop)
				{
					cout << "��� ����������� ������ ������ ������� 11, ��� ���������� ������ ������� 00:";
					cin >> comand;
				}
				Sleep(1500);
			} while (comand != comande::stop);// (comand=stop)
			cout << "���������� ������" << endl;
			Sleep(1500); //���������� �������� � 1500 ����������� (1.5) ���


			cout << "������ ��� ��� ������ �����? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}
		case 7:
		{
			break;
		}

		}

	} while (poz != 7);

}
int menu()
{
	char menu[8][50] = { "���������","����������� � ������","��� ASCII","��� �������� �� �������","��� ��������","������� �����","�����","�����" };//������ ����
	int poz = 0, key;//���-������ ����, ���-������ �������

	for (int i = 0; i < 8; i++)//������� ����
	{
		SetCursor(15, 10 + i);
		cout << menu[i];

	}
	do {
		for (int i = 0; i < 8; i++)//��������� ����� ���������� ������
		{
			SetCursor(15, 10 + i);

			if (i == poz)
			{
				SetColor(Yellow, Black);
			}
			else
			{
				SetColor(White, Black);
			}

			cout << menu[i];

		}

		key = _getch();
		switch (key)
		{
		case Up:
		{	poz--;
		if (poz < 0)
		{
			poz = 7;
		}
		break;
		}
		case Down:
		{
			poz++;
			if (poz > 7)
			{
				poz = 0;
			}
			break;
		}
		case Enter:
		{
			SetColor(White, Black);
			return(poz);//����������� ���������� ������ ����
		}


		}

	} while (true);







}
