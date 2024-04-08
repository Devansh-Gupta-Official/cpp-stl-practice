#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int main(){
    //Q. Given N strings, print unique strings in lexiographical order with their frequency
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

    map <string,int> m;
    int n;
    cin>>n;

    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}