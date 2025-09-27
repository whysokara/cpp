#include<iostream>
using namespace std;

int main(){

    int arr[4] = {4,7,2,6};

    int largestElement = INT_MIN;

    for (int i=0 ; i<4;i++){
        
        if (arr[i] > largestElement){
            largestElement = arr[i];
        }
       
    }
    cout << largestElement << endl;

    return 0;
}