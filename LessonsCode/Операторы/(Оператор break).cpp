#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	cout << "Начало цикла" << endl;

	/*for (int i = 0;  ; i++)
	{
		cout << "Переменная i = " << i << endl;
		if (i == 100)
		{
			break;
		}
	}*/

	int i = 0;
	while (true)
	{
		cout << "Переменная i = " << i << endl;
		i++;
		if (i == 1250)
		{
			cout << "Переменная i = " << i << endl;
			break;
		}
	}

	cout << "Конец цикла" << endl;

}
