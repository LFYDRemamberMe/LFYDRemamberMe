#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	const int ROWS = 5;
	const int COL = 8;
	const int SIZE = ROWS * COL;

	int arr[ROWS][COL];
	int arre[SIZE];
	int Random;
	int c = 0;
	bool hasalready;
	int temp;
	int arr1;

	for (int i = 0; i < SIZE; )
	{
		hasalready = false;
		Random = 1 + rand() % 40;
		for (int j = 0; j < i; j++)
		{
			if (arre[j] == Random)
			{
				hasalready = true;
				break;

			}
		}
		if (!hasalready)
		{
			arre[i] = Random;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		arr1 = arre[i];
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = arre[c];
			c++;
		}
	}

	cout << "Массив до сортировки!" << endl << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "ROW: " << i + 1 << "\tCOL: " << j + 1 << "\tValue: " << arr[i][j] << endl;
		}
		for (int times = 0; times < 30; times++)
		{
			cout << "-";
		}
		cout << endl;
	}

	cout << endl;

	//Сортируем массив
//_______________________________________________________________________________
	for (int c = 0; c <= SIZE; c++)//колличество проходов
	{
		//в строках упорядочиваем
		//____________________________________________
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COL - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					temp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = temp;
				}
			}
		}
		//в столбах упорядочиваем
		//_____________________________________________
		for (int x = 0; x < COL; x++)
		{
			for (int z = 0; z < ROWS - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					temp = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = temp;
				}
			}
		}
	}

	cout << "Массив после сортировки!" << endl << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "ROW: " << i + 1 << "\tCOL: " << j + 1 << "\tValue: " << arr[i][j] << endl;
		}
		for (int times = 0; times < 30; times++)
		{
			cout << "-";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
