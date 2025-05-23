#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;
    cin >> a;

    if ( a % 13 || a % 19) {
        cout << "True";
    }

    else {
        cout << "False";
    }
    return 0;
}