#include <iostream>

using namespace std;

void PrintNLines(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 1; j++)
            cout << "12345^&*()_";
        cout << endl;
    }
}

int main() {
    int row_num;
    cin >> row_num;

    PrintNLines(row_num);

    return 0;
}
