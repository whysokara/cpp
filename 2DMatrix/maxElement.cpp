#include<iostream>
using namespace std;
#include <climits>

int main(){

    int a[5][5];
    int m,n;
    cin >> m >> n;
    int max = INT_MIN;

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
        
    }
    cout << max << endl;

    return 0;
}