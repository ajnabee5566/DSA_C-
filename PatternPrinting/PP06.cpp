   #include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
     
        for (int j = 0; j < m; j++) {
               char name = 'a' + j - 1;
            cout << name;
        }
        cout << endl;
    }

    return 0;
}
