#include<iostream>
using namespace std;

int main(){

    int arr[8] = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int counter = 0;

    for (int i=0; i<n;i++){
        if(arr[i] != ele){
            arr[counter] = arr[i];
            counter += 1;
        }
    }
    cout << counter;

    for (int j=0; j<n;j++){
        cout << arr[j];
    }

    return 0;
}