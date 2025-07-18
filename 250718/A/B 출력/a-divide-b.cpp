#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;
    cin >> a >> b;

    // 정수부 출력
    cout << a / b << ".";

    // 소수부 계산
    a = a % b; // 나머지로 시작
    for (int i = 0; i < 20; i++) {
        a *= 10;
        cout << a / b;
        a %= b;
    }
    return 0;
}