#include <iostream>
using namespace std;

// a5 b3 순서대로 나오는 프로그램 

int main() {
    int a = 3, b = 5;
    int temp;
    temp = a;
    a = b;
    b = temp; 

    cout << a << endl;
    cout << b;

    return 0;
}