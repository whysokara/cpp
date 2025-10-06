#include<iostream>
using namespace std;

int main(){

    int a[5][5];
    int m,n;

    cin >> m >> n;

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
   


    return 0;
}