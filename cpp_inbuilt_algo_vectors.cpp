#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;

//all functions have O(n) time complexity

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i =0;i<n;++i){
        cin>>v[i];
    }

    auto it = min_element(v.begin()+3,v.end());
    int min = *(min_element(v.begin(),v.end()));
    cout<<min<<endl;

    auto it = max_element(v.begin(),v.end());
    int mAX = *(max_element(v.begin(),v.end()));
    cout<<mAX<<endl;

    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    int ct = count(v.begin()+1,v.end(),3);
    cout<<ct<<endl;


    auto it = find(v.begin(),v.end(), 2);
    if(it!=v.end()){
        cout<<*it<<endl;
    }else{
        cout<<"ELEMENT NOT FOUND";
    }
    int element = *find(v.begin(),v.end(), 2);
    cout<<element<<endl;


    reverse(v.begin()+2,v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    string s = "abcfgrh";
    reverse(s.begin()+1,s.end());
    cout<<s<<endl;


}


//similarly for arrays, v.begin() becomes v and v.end() becomes v+n
//else everything remains the same