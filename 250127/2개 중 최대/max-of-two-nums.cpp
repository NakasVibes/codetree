#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    b = b > a ? b : a;
    cout << b;
    return 0;
}