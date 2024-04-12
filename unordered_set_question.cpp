#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main(){
    //Q. Given N strings and Q queries.In each query, you are given a string. Print yes if string is present elso no
    //N <= 10^6
    //|S| <= 100
    //Q <= 10^6


    /*Let inputs be 
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
    3
    abc
    cdef
    abcdef*/

    unordered_set <string> s;
    int n;
    cin>>n;

    for(int i =0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    int q;
    cin>>q;

    while(q--){
        string str;
        cin>>str;
        if (s.find(str) == s.end()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    for(auto pr:s){
        cout<<pr<<endl;
    }


}