#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if ( a > 0 ) {
        if ( b >= 19) {
                cout << "WOMAN" << endl;
        }
        else {
            cout << "GIRL" << endl;
        }
    }

    else {
        if ( a == 0 ) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }


    
    // Please write your code here.
    return 0;
}