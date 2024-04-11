//DIFFERENCE BETWEEN MAPS AND UNORDERED MAPS
//1. inbuilt implementation
//2. time complexity
//3. valid keys datatype

#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
using namespace std;

void printMap(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &value:m){           //using auto and range based keywords
        cout<<value.first<<" "<<value.second<<endl;
    }
}

int main(){
    unordered_map<int,string> m; //maps can take any complex datatypes as keys but in unordered maps, this is not possible(like stes,pairs,vectors,etc) as their hashing function is not defined.

    m[1] = "abc";//maps use trees while unordered maps use hashing tables. Thus average time complexity for insertion is O(1).
    m[5] = "cde"; 
    m.insert({7,"lll"});
    m[3] = "acd"; 
    m.insert({4,"afg"});
    m[4] = "hehe";

    // auto it = m.find(5);  //returns an iterator  //time complexity is O(1)
    auto it = m.find(10);  //returns an iterator  //time complexity is O(1)
    if(it==m.end()){
        cout<<"NO VALUE"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


    m.erase(3); //time complexity is O(1)
    auto itv = m.find(7);

    if(itv!=m.end()){
        m.erase(itv);
    }

    m.clear();

    printMap(m);

}