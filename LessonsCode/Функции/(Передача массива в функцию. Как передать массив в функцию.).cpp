#include <iostream> 
#include <ctime>

using namespace std;

void FillArray(int arr[], const int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void FillUnicArray(int arr[], const int size) {
	bool alreadyThere; // Переменная для проверки

	for (int i = 0; i < size; )
	{
		alreadyThere = false;
		int newrandomvalue = rand() % 10; // Рандомное значение генерируем

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
}

void PrintArray(int arr[], const int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	for (int j= 0; j < 30; j++)
	{
		cout << "-";
	}

	cout << endl;

}

void PrintUnicArray(int arr[], const int size) {

	cout << "Уникальный массив!" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	for (int j = 0; j < 30; j++)
	{
		cout << "-";
	}

	cout << endl;

}

int main()
{
	setlocale(LC_ALL, "RU");
	
	const int SIZE = 10;

	int arr[SIZE];

	int arr1[SIZE];

	PrintArray(arr, SIZE);

	FillArray(arr, SIZE);

	PrintArray(arr, SIZE);

	FillUnicArray(arr1, SIZE);

	PrintUnicArray(arr1, SIZE);

	return 0;
}
