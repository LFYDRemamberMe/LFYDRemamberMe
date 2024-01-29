#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	int height, width;
	string symbol;

	cout << "Укажите символ:" << endl;
	cin >> symbol;

	cout << "Введите высоту прямоугольника:" << endl;
	cin >> height;

	cout << "Введите ширину прямоугольника:" << endl;
	cin >> width;

	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << symbol;
		}
		cout << endl;
	}

	cout << endl;
}
