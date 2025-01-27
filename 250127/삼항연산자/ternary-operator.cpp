#include <iostream>
using namespace std;
#include <string>

int main() {
    int a;
    cin >> a;
    string result = (a == 100) ? "pass" : "failure";

    cout << result;
    
    return 0;
}