#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i=0; i<50;i++){
        cout << "Capacity " << v.capacity() << endl;
        v.push_back(i+1);
        cout << "Size " << v.size() << endl;
    }
    sort(v.begin(),v.end()); // to sort
    // for (int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }

    cout << endl;



    return 0;
}