#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

//same differences between unordered set and ordered set as in the case of unordered map and ordered map

void printSet(unordered_set<string> &s){
    for(string value:s){
        cout<<value<<" "<<endl;
    }

    // for(auto it = s.begin();it!=s.end();it++){
    //     cout<<(*it)<<" "<<endl;
    // }
}

int main(){
    unordered_set<string> s;  //no complex datatypes can be used
    s.insert("abc");  //time complexity is O(1)
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