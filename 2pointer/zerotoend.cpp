#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,0,4,3,0,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int counter = 0;

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[counter]);
            counter += 1;
        }
    }

    for (int j=0; j<n;j++){
        cout << arr[j] <<  " ";
    }

    return 0;
}