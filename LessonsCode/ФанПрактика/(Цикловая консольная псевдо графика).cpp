#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	/*for ( ;  ; )
	{
		cout << "PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
		cout << "\t      PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
		cout << "\t\t            PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
		cout << "\t\t\t                  PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
		cout << "\t\t            PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
		cout << "\t      PIDORAS NAHYI!" << endl << endl << endl;
		Sleep(100);
	}*/

	int i;
	string text;
	cout << "Введите частоту обновления текста в мс:" << endl;
	cin >> i;
	cout << "Введите текст до 10 символов:" << endl; // Eanglish
	cin >> text;
	for (; ; )
	{
		cout << "\t\t\t" << text << endl;
		Sleep(i);
		cout << "\t\t\t\t" << text << endl;
		Sleep(i);
		cout << "\t\t\t\t\t" << text << endl;
		Sleep(i);
		cout << "\t\t\t\t\t\t" << text << endl;
		Sleep(i);
		cout << "\t\t\t\t\t" << text << endl;
		Sleep(i);
		cout << "\t\t\t\t" << text << endl;
		Sleep(i);
	}

}
