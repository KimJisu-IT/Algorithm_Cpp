#include <iostream>
#include <tchar.h>

using namespace std;

template <typename T>

T TestFunc(T a) {
	cout << "�Ű����� a: " << a << endl;

	return a;
}

int _tmain(int argc, _TCHAR* argv[]) {

	cout << "int \t" << TestFunc(3) << endl;
	cout << "double \t" << TestFunc(3.3) << endl;
	cout << "char \t" << TestFunc('A') << endl;
	cout << "char* \t" << TestFunc("TestString") << endl;

	return 0;
}