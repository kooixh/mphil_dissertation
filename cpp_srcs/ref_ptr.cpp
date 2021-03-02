#include<iostream>

using namespace std;

int main() {

	int x = 10;
	const int *p = &x;
	cout << *p << endl;
	x = 5;
	cout << *p << endl;
	return 0;
}