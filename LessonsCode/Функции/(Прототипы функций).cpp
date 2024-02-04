#include <iostream>

using namespace std;

void foo(int a, int b);
void foo2();

void foo(int a, int b) {
    cout << "Я шалава, меня вызвали" << endl;
    foo2();
    cout << a + b << endl;
}

void foo2() {
    cout << "Меня тоже" << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");

    foo(12, 3);

    return 0;
}
