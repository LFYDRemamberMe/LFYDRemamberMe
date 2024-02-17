#include <iostream>

using namespace std;

void foo(int a = 5) {
	for (int i = 0; i < a; i++)
	{
		cout << "@" << endl;
	}
	cout << a << endl;
}


int main()
{
    setlocale(LC_ALL, "RU");

	foo(20);

    return 0;
}
