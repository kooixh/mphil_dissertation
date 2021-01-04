#include <iostream>

using namespace std;

template <int N>
struct LessThanN {
    int value;
    LessThanN(int x) {
   	    if (x < N)
            value = x;
        else
           throw "invalid type";
    }
};

int main() {
    cout << "Hello World!" << "\n";
    const int n = 5;
    LessThanN<n> ltf = LessThanN<n>(4);
    cout << ltf.value;
    return 0;
}