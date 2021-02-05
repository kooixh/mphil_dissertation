#include <iostream>

using namespace std;


int main() {
	int a = 10;
	int const *const p  = new int(10);
	int* q = p;
	cout << *q << endl;
	return 0;
}