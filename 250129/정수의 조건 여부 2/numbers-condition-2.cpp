#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if ( a == 5 ) {
        cout << "A" << endl;
    }

    else if ( a % 2 == 0 ) {
        cout << "B" << endl;
    }
    return 0;
}