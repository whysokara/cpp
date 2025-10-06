#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>

int main(){
   unordered_map<string, int> mymap;
//    pair<string, int> p("abs",1);
//    mymap.insert(p);

mymap["def"] = 2; // insert like array

cout << mymap["def"] << endl;
// cout << mymap["abs"] << endl;

    return 0;
}