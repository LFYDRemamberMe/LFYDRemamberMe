#include <iostream>
#include <ctime>

using namespace std;

void foo() {
	cout << "Function has called" << endl;
}

int Sum(int a, int b) {
	return a + b;
}

int main() {
	setlocale(LC_ALL, "RU");
	int c;

	foo();

	c = Sum(120, 234);

	cout << c << endl;

	cout << Sum(17, 221) << endl;

	return 0;
}
