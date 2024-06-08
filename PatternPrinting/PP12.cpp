   #include<iostream>
using namespace std;

int main() {
    int n=0, m=0;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
     
        for (int j = n; j >=n-i+1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
