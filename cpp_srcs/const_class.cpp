#include <iostream>

using namespace std;

class A
{
	public:
		int x;
		A()
		{
			x = 100;
		}
};

int main()
{
	const A a;      // declaring const object 'a' of class 'A'
	cout << a.x << endl;
	a.x = 10;
	return 0;
}