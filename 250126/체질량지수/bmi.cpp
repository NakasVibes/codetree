#include <iostream>
using namespace std;

int main() {
    int cm, kg;
    cin >> cm >> kg;
    double m = cm / 100.0;
    double BMI = kg / (m * m);

    cout << (int)BMI << endl;

    if ( BMI >= 25 ) {
        cout << "Obesity";
    }
    return 0;
}