#include <iostream>
using namespace std;

int main(){
    pair<int,string> p;
    // p = make_pair(2,"HI");
    p = {2,"HI"};

    pair<int,string> &p1 = p;  //passing address of new pair so that any changes made in new pair  will affect older pair
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    // here we are given the task of switching 3 with 1 in a while at the same time switching 4 and 2 in b
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for(int i =0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}