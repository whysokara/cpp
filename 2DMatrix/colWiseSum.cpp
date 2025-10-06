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

    for (int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += a[j][i];
        }
        cout << sum << endl;
    }

    return 0;
}