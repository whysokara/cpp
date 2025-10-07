#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> *vp = new vector<int>();
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    v[1] = 100;
    
    v[3] = 90;
    v[4] = 35;
    v[5] = 65;
    v.push_back(22061996);

    v.pop_back();

    // cout << v[3] << endl;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    // cout << v[6] << endl;

    for (int i=0; i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;



    return 0;
}