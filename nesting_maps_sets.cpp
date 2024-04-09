#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    //comparing pairs
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    cout<<(p1<p2);
    //thus p1 is less than p2 as we get output as 1;compares first element of p1 with p2

    //same comparison takes place for all other data structures like set also;they compare first element of all data structures.

    
    map<pair<string,string>,vector<int>> m;   //for unordered maps, we cannot use pair as a key
    int n;
    cin>>n;

    for(int i =0;i<n;++i){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;++j){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }

    for(auto &pr:m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element:list){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}


/*take inputs as 
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4*/