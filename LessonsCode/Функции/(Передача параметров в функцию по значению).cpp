#include <iostream> 
#include <ctime>

using namespace std;

int Foo(int a) {
	return ++a;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int value = 1;

	value = Foo(value);

	cout << value << endl;
	

	return 0;
}
