#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	int sum = 0;

	int rangeBegin, rangeEnd;

	cout << "Введите начало диапозона: " << endl;
	cin >> rangeBegin;

	cout << "Введите конец диапозона: " << endl;
	cin >> rangeEnd;

	do
	{

		if (rangeBegin %2 != 0 )
		{
			sum += rangeBegin;
		}

		rangeBegin++;
	} while (rangeBegin <= rangeEnd);

	cout << "Сумма всех целых нечётных чисел = " << sum << endl;

}
