#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int arr[]{5, 123, 253, 456, 677};

	/*int a = sizeof(arr);
	int b = sizeof(int);*/

	/*for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		cout << arr[i] << endl;
	}*/

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}
