#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void printVector(vector<int> v){    //pass &v instead of v to pass the actual vector instead of a copy
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        // v.size()  has time complexity O(1)

        cout<<v[i];
    }
    cout<<endl;
}

int main(){
    vector<int> v[10]; //makes 10 vectors of 0 size

    //Now suppose we get the following input instruction- 
    // 3
    // 3
    // 1 2 3
    // 3
    // 3 4 5
    // 2
    // 1 2

    int N; //number of vectors to be taken
    cin>>N;
    vector<int> v1[N];  //in array of vectors, the number of vectors in fixed while the length of each vector varies **
    for (int i =0;i<N;++i){
        int n; //size of each respective vector
        cin >>n;
        for(int j =0;j<n;++j){
            int x;
            cin>>x;
            v1[i].push_back(x);
        }
    }

    for(int i =0;i<N;++i){
        printVector(v1[i]);
    }
    cout<<v1[0][0];
}