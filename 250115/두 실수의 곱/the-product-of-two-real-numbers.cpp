#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(3);

    double a = 5.26;
    double b = 8.27;
    double c = a * b;

    cout << c;

    return 0;
}