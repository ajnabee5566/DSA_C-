#include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
        char name = 'a' + i - 1;
        for (int j = 0; j < m; j++) {
            cout << name;
        }
        cout << endl;
    }

    return 0;
}
