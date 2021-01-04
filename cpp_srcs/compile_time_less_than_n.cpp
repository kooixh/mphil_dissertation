#include <iostream>
#include <stdexcept>


using namespace std;

template <int N, int M>
struct LessThanN {
    int value;
    LessThanN() {
        static_assert(M < N, "error");
        value = M;
    }
};

int main() {
    LessThanN<5, 4> ltf = LessThanN<5,4>();
    LessThanN<10, 9> ltt = LessThanN<10,9>();
    cout << ltf.value + ltt.value;
    return 0;
}
