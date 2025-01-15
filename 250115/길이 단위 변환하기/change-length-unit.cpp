#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);

    double a = 30.48;
    double b = 160934;

    double ft = 9.2;
    double mi = 1.3;

    double c = ft * a;
    double d = mi * b;

    cout << ft << "ft = " << c << "cm" << endl;
    cout << mi << "mi = " << d << "cm" << endl;


    return 0;
}