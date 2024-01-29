#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "RU");

	cout << "1" << endl;

	cout << "2" << endl;

	goto link;

	cout << "3" << endl;

	cout << "4" << endl;

	link:

	cout << "5" << endl;

	cout << "6" << endl;
	 
	system("pause");
	 
}
