#include <iostream>

using namespace std;


int main() {
	int const * p = new int(10);
	*p = 5;
	p = new int(7);
	cout << *p << endl;
	return 0;
}