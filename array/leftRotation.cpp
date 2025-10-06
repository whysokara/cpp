#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp1[3] = {0};

    for (int i=0;i<k;i++){
        temp1[i] = arr[i];
    }

    for (int j=0; j<k;j++){
        cout << temp1[j] << endl;
    }
    

    return 0;
}