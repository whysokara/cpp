#include<iostream>
using namespace std;

int power(int x, int n){
    // base case
    if(n==0){
        return 1;
    }
    // recursice
    int smallOutput = power(x, n-1);

    // calculation

    return x * smallOutput;
}

int main(){
    cout << power(3,4) << endl;


    return 0;
}