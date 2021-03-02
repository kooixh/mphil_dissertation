#include <iostream>

using namespace std;


int main() {
	int const * p = new int(10);
	int *q = p;
	cout << *p << endl;
	return 0;
}