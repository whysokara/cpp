#include<iostream>
using namespace std;

int main(){

    int arr[4] = {4,7,2,6};

    int smallestElement = INT_MAX;

    for (int i=0 ; i<4;i++){
        
        if (arr[i] < smallestElement){
            smallestElement = arr[i];
        }
       
    }
    cout << smallestElement << endl;

    return 0;
}