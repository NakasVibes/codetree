#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Amath, Bmath, Aeng, Beng;
    cin >> Amath >> Aeng >> Bmath >> Beng;

    if ( Amath > Bmath || (Amath == Bmath) && Aeng > Beng ) {
        cout << "A";
    } 

    else {
        cout << "B";
    }
    return 0;
}