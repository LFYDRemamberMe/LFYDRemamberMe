#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	int symbolCount;
	char sybol;
	int lineType;
	int index = 0;

	cout << "Введите количество в линии:" << endl;
	cin >> symbolCount;

	cout << "Введите тип символа:" << endl;
	cin >> sybol;

	cout << "Выберите тип линии:" << endl
		<< "1 - вертикальная линия" << endl
		<< "2 - горизонтальная линия" << endl;

	cin >> lineType;

	if (lineType != 1 && lineType != 2) {
		cout << "Не корректный тип линии!" << endl;
		return;
	}

	while (index < symbolCount)
	{
		if (lineType==1)
		{
			cout << sybol << endl;
		}
		if (lineType==2)
		{
			cout << sybol;
		}

		index++;

	}

	cout << endl << endl;


}
