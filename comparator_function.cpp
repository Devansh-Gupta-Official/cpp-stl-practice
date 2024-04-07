#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

// bool should_i_swap(int a, int b){    //comparator function ; decides sorting ka behaviour 
//     if(a>b) return true;
//     return false;
// }

// bool should_i_swap(pair<int,int> a,pair<int,int> b){    //comparator function ; decides sorting ka behaviour 
//     if(a.first!=b.first){
//         if(a.first>b.first) return true;
//         return false;
//     }
//     if(a.second<b.second) return true;
//     return false;
// }

// bool should_i_swap(pair<int,int> a,pair<int,int> b){    //changing this to fit the inbuilt sort
//     if(a.first!=b.first){
//         if(a.first>b.first) return false;
//         return true;
//     }
//     if(a.second<b.second) return false;
//     return true;
// }

bool should_i_swap(pair<int,int> a,pair<int,int> b){    //short version of above code
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}


// int main(){
//     int n;
//     cin>>n;
//     vector <int> a(n);
//     for(int i =0;i<n;++i){
//         cin>>a[i];
//     }

//     for(int i =0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             if(should_i_swap(a[i],a[j])){
//                 swap(a[i],a[j]);
//             }
//         }
//     }

//     for(int i =0;i<n;++i){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i].first>>a[i].second;
    }

    // for(int i =0;i<n;++i){
    //     for(int j=i+1;j<n;++j){
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }

    sort(a.begin(),a.end(),should_i_swap); //third argument is comparator function
    //VERY IMPORTANT inbuilt sort function's comparator function actually returns false instead of true.Thats why when running above line of code, we will get output in descending order instead of ascending order.

    sort(a.begin(),a.end(),greater<pair<int,int>>());  //this is an inbuilt comparator 

    for(int i =0;i<n;++i){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
}