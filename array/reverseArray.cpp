#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,4,5,7,3};
    int start = 0;
    int end = 4;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for (int k = 0; k<5;k++){
        cout << arr[k]<<" ";
    }
    return 0;
}