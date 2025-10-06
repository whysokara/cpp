#include<iostream>
using namespace std;
#include <climits>

int main(){

    int a[5][5];
    int m,n;
    cin >> m >> n;
    int max = INT_MIN;
    int maxRow = -1, maxCol = -1;
    

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] > max){
                max = a[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
        
    }
    cout << max << " Row Index "<< maxRow << " Col Index " << maxCol << endl;

    return 0;
}