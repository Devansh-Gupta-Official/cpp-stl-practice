#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main(){
    //Q. Given N strings, print unique strings in lexiographical order
    // N <= 10^5
    // |S| <= 100

    /*Let inputs be 
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc*/

    set <string> s;
    int n;
    cin>>n;
    for(int i =0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto value:s){
        cout<<value<<endl;
    }
}