#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	//int i;
	int i = 0;

	cout << "Первый цикл" << endl;
	for ( ; i < 10; i++)
	{
		cout << "Переменная i: " << i << endl;
	}


	cout << "Второй цикл" << endl;
	for ( ; i < 20; i++)
	{
		cout << "Переменная i: " << i << endl;
	}

	cout << "Бесконечный цикл" << endl;
	cout << "#####   #  ####### #####    ########  #### # #" << endl;
	for ( ; ; )
	{
		cout << "Соси хуй" << endl;
	}

	/* for (int i = 0, j = 10 ; i < 11 && j != 5; i++, j--)
	{
		cout << "Переменная i = " << i << endl;
		cout << "Переменная j = " << j << endl;
	} */

}
