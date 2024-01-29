#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int const ROW = 2;
	int const COL = 4;

	/*int arr[ROW][COL];*/
	
	/*cout << arr[1][1] << endl;

	arr[1][1] = 150;

	cout << arr[1][1] << endl;*/

	int arr[ROW][COL]{ 
		{2, 123, 546, 231},
		{872, 250, 12, 41},
	};
	

	int a; // Для отладчика чтобы посмотреть массив
	a = 0;

	return 0;
}
