#include <iostream>
#include <stdexcept>


using namespace std;

template <int N, int M>
struct LessThanN {
    int value;
    LessThanN() {
        static_assert(M < N, "type is invalid");
        value = M;
    }
};

int main() {
    const int n = 10;
    LessThanN<n, 9> ltt = LessThanN<n,9>();
    cout << ltt.value << endl; 
    ltt.value = 50;
    cout << ltt.value;
    return 0;
}
