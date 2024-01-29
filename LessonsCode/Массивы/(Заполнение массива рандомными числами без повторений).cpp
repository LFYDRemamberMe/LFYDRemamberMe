#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int const SIZE = 10; // размер массива
	int arr[SIZE]; // массив

	bool alreadyThere; // Переменная для проверки

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newrandomvalue = rand() % 20; // Рандомное значение генерируем

		for (int j = 0; j < i; j++) // Перебор массива
		{
			if (arr[j] == newrandomvalue) //Если число уже имееться
			{
				alreadyThere = true; // Меняем переменную на тру
				break; // Выходим с этого цикла
			}
		}

		if (!alreadyThere) // Если переменная тру, ставим новое значение массиву и идём к некст элементу
		{
			arr[i] = newrandomvalue;
			i++;
		}
	}
	//Вывод массива
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Элемент массива №" << i+1 << ":\t" << arr[i] << endl;
	}
	
	return 0;
}
