#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp;

    temp = b; // 6저장
    b = a; // b=5
    c = temp; // c=5
    a = 7;

    cout << a << endl;
    cout << b << endl;
    cout << c;


    return 0;
}