#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    //Q. Given N strings and Q queries.In each quesry, you are given a string. Print frequency of that string.
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
    2
    abc
    ghr*/


    unordered_map <string,int> m;
    int n;
    cin>>n;

    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }

    int q;
    cin>>q;
    while(q--){
        string s;
        cin >>s;
        cout<<m[s]<<endl;
    }

}