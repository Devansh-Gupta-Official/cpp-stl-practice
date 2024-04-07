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

unordered_map<char,int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string isBalanced(string s){    //time complexity equal to total amount of push and pop         operations.Hence 2N operactions will occur => time complexity is O(N)
    stack <char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }
        else{
            if(st.empty()){
                return "NO";
            } 
            else{
                char top = st.top();
                st.pop();
                if(symbols[top]+symbols[bracket]!=0){
                    return "NO";
                }
            }
        }
    }
    if(st.empty())  return "YES";
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}