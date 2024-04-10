#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
using namespace std;

int main(){
    //stack is LIFO
    //push
    //pop
    //top element seeing

    stack<int> s;
    s.push(2);    
    s.push(3);    
    s.push(4);    
    s.push(5);    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}