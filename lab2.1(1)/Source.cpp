#include <iostream> 
#include "Number.h" 

using namespace std;

int main() {
	Number a(0, 0);
	Number b;
	Number c(a);

	cout << b << endl;
	cout << c << endl;

	cout << "a++: " << a++ << endl;
	cout << a << endl;
	cout << "++a: " << ++a << endl;
	cout << a << endl;

	cout << "a--: " << a-- << endl;
	cout << a << endl;
	cout << "--a: " << --a << endl;
	cout << a << endl;

	Number x;
	cout << "Input integer numbers ->" << endl;
	cin >> x;

	Number y; y = x * 5;
	cout << "Result: y = a * 5 = " << endl;
	cout << y;

	cin.get();
	return 0;
}
