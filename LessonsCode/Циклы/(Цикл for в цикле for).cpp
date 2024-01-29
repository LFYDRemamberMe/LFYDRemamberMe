#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	for (int i = 1; i < 5; i++)
	{
		cout << "||Сработал 1-ый цикл for интерация № " << i << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t||сработал 2-ой цикл for интерация № " << j << endl;
		}
	}

}
