#include <iostream>
using namespace std;

int main() {
    int temp;
    int a = 1, b = 2, c = 3;
    temp = a + b + c;
    a = temp;
    b = temp;
    c = temp;

    cout << a << " " << b << " " << c;

    return 0;
}