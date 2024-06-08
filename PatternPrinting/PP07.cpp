   #include<iostream>
using namespace std;

int main() {
    int n, m ,count=1;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
     
        for (int j = 0; j < m; j++) {
               
            cout <<count<<" " ;
            count=count+1;
        }
        
        cout << endl;
    }

    return 0;
}
