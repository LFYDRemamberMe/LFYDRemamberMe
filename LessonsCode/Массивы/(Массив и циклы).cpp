#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	const int size = 5;

	int arr[size]{ 55,123,5,6,12 }; 

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}
