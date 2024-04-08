// stores key value pairs
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

void printMap(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &value:m){           //using auto and range based keywords
        cout<<value.first<<" "<<value.second<<endl;
    }
}

int main(){
    map<int,string> m;
    m[1] = "abc";   //insertion takes O(logn) time where n is current size of map BUT IT DEPENDS ON TYPE OF KEYS
    m[5] = "cde"; 
    m.insert({7,"lll"});
    m[3] = "acd"; 
    m.insert({4,"afg"});
    m[4] = "hehe";

    map<string,string> ms;
    ms["abcd"] = "abcd";  //time complexity becomes s.size() * log(n) as it takes time for string comparison also. Here s.size() is size of string being inserted and n is size of map


    // map<int,string> :: iterator it;   //we see that all keys printed are in a sorted order
    // for(it=m.begin();it!=m.end();++it){
    //     cout<<(*it).first<<endl;
    //     cout<<(*it).second<<endl;
    // }


    // auto it = m.find(5);  //returns an iterator  //time complexity is O(log n)
    auto it = m.find(10);  //returns an iterator  //time complexity is O(log n)
    if(it==m.end()){
        cout<<"NO VALUE"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


    m.erase(3); //time complexity is O(log n)
    auto itv = m.find(7);

    if(itv!=m.end()){
        m.erase(itv);
    }

    m.clear();

    printMap(m);
    
}


