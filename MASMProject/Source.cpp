#include <iostream>

using namespace std;
extern "C" int SomeFunction();


int main() {
	cout << "the result is : " << SomeFunction() << endl;
	return 0;
	}