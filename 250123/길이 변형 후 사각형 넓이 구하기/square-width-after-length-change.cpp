#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // a는 가로 b는 세로
    a += 8;
    cout << a << endl;

    b *= 3;
    cout << b << endl;
    cout << a * b;

    return 0;
}