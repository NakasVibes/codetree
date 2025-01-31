#include <iostream>
using namespace std;

int main() {
    int amath, aeng;
    int bmath, beng;
    cin >> amath >> aeng >> bmath >> beng;

    if (amath > bmath && aeng > beng) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}