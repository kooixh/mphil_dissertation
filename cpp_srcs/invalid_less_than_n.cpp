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
    LessThanN<5> ltf = LessThanN<5>(10);
    cout << ltf.value;
    return 0;
}
