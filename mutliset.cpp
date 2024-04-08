//allows us to insert multiple values in a set

#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

void printSet(multiset<string> &s){
    for(string value:s){
        cout<<value<<" "<<endl;
    }

    // for(auto it = s.begin();it!=s.end();it++){
    //     cout<<(*it)<<" "<<endl;
    // }
}

int main(){
    multiset<string> s; 
    s.insert("abc");  //time complexity is O(logn)
    s.insert("god");
    s.insert("hehe");
    s.insert("abc");  //stores multiple values
    s.insert("abc");

    auto it = s.find("abc");   //returns iterator;time complexity is O(logn)
    if(it!=s.end()){
        // cout<<(*it)<<endl;
        s.erase(it); //deletion by iterators will delete only one "abc"
    }

    //but if we use deletion by passing value, it deletes all "abc"s
    s.erase("abc");

    // s.clear();

    printSet(s);
}