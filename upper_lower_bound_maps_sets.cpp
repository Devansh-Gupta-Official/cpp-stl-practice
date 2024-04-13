#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> s;
    map<int,int> m;
    for(int i =0;i<n;++i){
        int x;
        cin>>x;
        s.insert(x);
    }

    // auto it = lower_bound(s.begin(),s.end(),5);   //this is O(n) for maps and sets
    auto it = s.lower_bound(5);   //this is O(logn) for maps and sets
    cout<<(*it)<<endl;

    //for maps, you can apply lower and upper bound only on the keys
}