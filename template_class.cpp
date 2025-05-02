#include<iostream>
using namespace std;

template <typename T, typename U>
class A {
    T x;
    U y;

public:
    A() {
        x = 10;
        y = 20;
    }

    void sum() {
        cout << "ADDITION OF TWO NUMBERS : " << x + y << endl;
    }
};

int main() {
    A<int, int> a;
    a.sum();
    return 0;
}

