#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	for (int i = 0; i <= 10; i++)
	{	
		if (i == 5)
		{
			continue;
		}
		cout << "Переменная i = " << i << endl;
	}

}
