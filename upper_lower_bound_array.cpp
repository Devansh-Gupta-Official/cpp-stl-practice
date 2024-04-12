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
    int a[n];
    for(int i =0;i<n;++i){
        cin>>a[i];
    }

    //to apply lower or upper bound, the data structure must be sorted or else they won't work in O(logn) complexity but in O(n) complexity
    sort(a,a+n);

    for(int i =0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // int *ptr = lower_bound(a,a+n,5);  //time complexity of both is log(n) where n is size of array
    int *ptr = upper_bound(a+4,a+n,5);
    if(ptr==(a+n)){
        cout<<"NOT FOUND";
        return 0;
    }
    cout<<(*ptr)<<endl;
    


    //lower bound finds the element to be found or the element greater than the element to be found. But if both the element and the next greater element are not present, it will give us the pointer to the next positioned element .

    //Upper bound finds the next greater element always no matter what

    //Lower and Upper bound return location i.e pointers and iterators
     
}