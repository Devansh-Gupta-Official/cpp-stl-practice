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

int main(){
    //lambda function syntax:
    cout<<[](int x){return x+2;}(2) <<endl;
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(4,11)<<endl;

    vector<int> v = {2,3,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});  //will return 1 if all elements are +ve
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});  //will return 1 even if one element is +ve
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});  //will return 1 if no elemet matches






}