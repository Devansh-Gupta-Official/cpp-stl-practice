#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void printVector(vector<pair<int,int>> v){    //pass &v instead of v to pass the actual vector instead of a copy
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        // v.size()  has time complexity O(1)

        cout<<v[i].first<<" ";
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};    //this can be used instead of array of pairs
    vector<pair<int,int>> v1;
    printVector(v);

    int n;
    cin >>n;
    for(int i =0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    
    printVector(v1);
}