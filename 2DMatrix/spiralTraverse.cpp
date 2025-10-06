#include<iostream>
using namespace std;

int main(){

    int matrix[5][5];
    int m,n;

    cin >> m >> n;
    

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }

    int rowBegin = 0;
    int rowEnd = m-1;
    int colBegin = 0;
    int colEnd = n-1;

    while (rowBegin <= rowEnd && colBegin <= colEnd){
        for (int i=colBegin; i<=colEnd; i++){
            cout << matrix[rowBegin][i] << " ";
        }
        rowBegin++;

        for (int i=rowBegin; i<=rowEnd; i++){
            cout << matrix[i][colEnd] << " ";
        }
        colEnd--;

        
        for (int i=colEnd; i>=colBegin; i--){
            cout << matrix[rowEnd][i] << " ";
        }
    
        rowEnd--;
        
         for (int i=rowEnd; i>=rowBegin; i--){
            cout << matrix[i][colBegin] << " ";
        }
    
        colBegin++;

    }

    return 0;
}