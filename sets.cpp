#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

void printSet(set<string> &s){
    for(string value:s){
        cout<<value<<" "<<endl;
    }

    // for(auto it = s.begin();it!=s.end();it++){
    //     cout<<(*it)<<" "<<endl;
    // }
}

int main(){
    set<string> s;
    s.insert("abc");  //time complexity is O(logn)
    s.insert("god");
    s.insert("hehe");
    s.insert("abc");  //stores only unique functions

    auto it = s.find("abc");   //returns iterator;time complexity is O(1)
    if(it!=s.end()){
        // cout<<(*it)<<endl;
        s.erase(it);
    }

    s.erase("god");

    s.clear();

    printSet(s);
}