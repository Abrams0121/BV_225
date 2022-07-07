﻿#include<iostream>	//cin/cout
using namespace std;//cin/cout

void main()
{
	setlocale(LC_ALL, "Russian");	//Устанавливает кирилическую кодировку в консоли
	cout << "C:\\Windows\\System32\\drivers\\\n";
	cout << "\t\t\t\t\tHello World!\n";
	cout << "\tПривет\t\"Мир\"!";
}
//Ctrl + F7 - Компиляция
//Ctrl + F5 - Запуск

/*
-------------------------------------------------
#include<iostream>
# - показывает, что include - это директива.
Директива - это указание компилятору на выполнение некоторых действий.
Директива #include (включить, подключить) указывает компилятору на то,
что к нашему исходному файлу нужно подключить другой файл, в данном случае iostream.
<> - компилятор будет искать его в системных каталогах Visual Studio
"" - компилятор будет искать его сначала в каталоге с проектом, а потом 
     в системных каталогах VS.

iostream содержит потоки ввода/вывода cin/cout
-------------------------------------------------
using namespace std; //Говорит компилятору использовать пространство имен std.
В этом именном пространстве объявлениы потоки cin/cout
-------------------------------------------------
void main()
main() - это главная функция, которая является точкой входа,
поскольку с нее начинается выполнение любой программы.
void (Пустота) показывает, что функция main() ничего НЕ возвращает по завершении
() - показывают что main() - это функция, а не переменная.
{} - показывают тело и область видимости функции main()
-------------------------------------------------
cout (Console Out) - поток вывода на экран, выводит значения в окно консоли.
выводимые значения должны разделяться <<

<< - оператор перенаправления в поток, "отправляют" значения в поток cout.

"Hello World!" - строковая константа.
Строковая константа - это последовательность символов,
заключенная в двойные кавычки.
; - признак конца выражения.
-------------------------------------------------
*/

/*
------------------------------------------------------
				Escape-последовательности (Esc):
\ - Backslash - это символ отмены специального значения другого символа.
\" - вывод символа " в консоль.
\\ - вывод символа \ в консоль.

\n - newline (переводит курсор в начало следующей строки)
\t - выводит в консоль символ табуляции.
------------------------------------------------------
*/