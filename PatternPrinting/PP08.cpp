   #include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
     
        for (int j =i; j >=1; j--) {
               
            cout <<j ;
        }
        cout << endl;
    }

    return 0;
}
