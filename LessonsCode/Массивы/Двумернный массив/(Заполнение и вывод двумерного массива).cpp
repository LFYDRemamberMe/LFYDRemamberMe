#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	
	const int ROWS = 5;
	const int COL = 8;

	int arr[ROWS][COL];
	bool alreadyThere;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

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
	
	return 0;
}
