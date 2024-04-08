#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//inbuilt sort with array
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i =0;i<n;++i){
//         cin>>a[i];
//     }

//     sort(a+2,a+n);  //two inputs are - address of element from where sorting has to start and next address of element till which sorting has to stop

//     for(int i =0;i<n;++i){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


//inbuilt sort with vectors
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());  //worst case time complexity - O(nlogn)

    for(int i =0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


//introsort is a mixture of three sorting algorithms - quicksort, heapsort, insertion sort