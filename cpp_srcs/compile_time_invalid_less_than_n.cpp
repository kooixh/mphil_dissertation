#include <iostream>
#include <stdexcept>

using namespace std;

template <int N>
struct LessThanN {
    int value;
    LessThanN(int x) {
        //static_assert(x < N, "error");
        check(x);
    }

    int runtime_fallback(int x) { return x; } // note, not constexpr
    constexpr int f(int x) {
        return (x != 0) ? x : runtime_fallback(0);
    }
    constexpr int check(int x) {
        constexpr int t = (x >= N) ? f(1) : f(0);
        value = x;
        return value;
    }

};

int main() {
    LessThanN<5> ltf = LessThanN<5>(4);
    cout << ltf.value;
    return 0;
}
