#include <iostream>
#include <stdexcept>


using namespace std;

template <int N, int M>
struct LessThanN {
    int value;
    LessThanN(): value(M) {
        static_assert(M < N, "type is invalid");
    }
};

int main() {
    const int n = 10;
    LessThanN<n, 12> ltt = LessThanN<n,12>();
    cout << ltt.value << endl; 
    ltt.value = 50;
    cout << ltt.value;
    return 0;
}
