#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a1, b1;
    char a2, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if (a1 >= 19 || b1 >= 19 && a2 == 'M' || b2 == 'M' ) {
        cout << 1;
    }

    else {
        cout << 0;
    }
    return 0;
}