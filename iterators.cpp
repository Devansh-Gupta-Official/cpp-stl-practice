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

    vector<int> ::iterator it = v.begin(); //container :: iterator it;
    cout<<(*it)<<endl; 
    cout<<(*it+1)<<endl; 
    cout<<(*(it+2))<<endl; 
    for(it=v.begin();it!=v.end();++it){ //IMPORTANT it++ moves to the next iterator while it+1 moves to 
                                        //the next location
                                        //This has no effect in continuous conatiner like vectors but for
                                        //discontinouos containers likes maps and sets, this has a huge effect.
        cout<<(*it)<<endl;
    }

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};   //vector of pairs
    vector<pair<int,int>> :: iterator itv;
    // for(itv=v_p.begin();itv!=v_p.end();++itv){
    //     cout<<(*itv).first<<endl;
    //     cout<<(*itv).second<<endl;
    // }

    for(itv=v_p.begin();itv!=v_p.end();++itv){
        cout<<itv->first<<endl;
        cout<<itv->second<<endl;
    }
}