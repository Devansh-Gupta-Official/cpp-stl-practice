#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector<int> v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> ::iterator it = v.begin(); 
    for(it=v.begin();it!=v.end();++it){ 
        cout<<(*it)<<" ";
    }

    //RANGE BASED LOOPS
    for(int value:v){         //this 'value' is a copy of our original values
        cout<<value<<" ";
    }
    cout<<endl;

    for(int &value:v){         //this 'value' is a our original value (as we use reference)
        cout<<value<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> v_p ={{1,2},{2,3}};
    for(pair<int,int> &value:v_p){         //this 'value' is a copy of our original values
        cout<<value.first<<" "<<value.second<<endl; 
    }
    cout<<endl;


    //AUTO KEYWORD
    auto a =1;   //determines datatype on its own
    vector<int> v_1 ={2,3,5,6,7};
    // vector<int> ::iterator it;
    for(auto it=v_1.begin();it!=v_1.end();++it){ 
        cout<<(*it)<<" ";
    }
}