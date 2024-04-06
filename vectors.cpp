#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void printVector(vector<int> v){    //pass &v instead of v to pass the actual vector instead of a copy
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        // v.size()  has time complexity O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // vectors are like arrays and are continuous memory blocks
    // vectors are arrays with dynamic size

    // METHOD 1 to declare vector
    vector<int> v;    //instead of string, you can put anything like containers or pairs,etc..
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        printVector(v);
        v.push_back(x);  //time complexity is O(1)
    }

    printVector(v);


    // METHOD 2 to declare vector
    vector<int> v(5);  //vector of size 5, if printed now without passing any values, gives 0 0 0 0 0

    // now if we push an element in above declared method, its size can increase
    v.push_back(7);  
    printVector(v); //we will get output as 0 0 0 0 0 7

    vector<int> v(5,3);
    printVector(v); //we will get output as 3 3 3 3 3
    v.pop_back(); //will remove last element of the vector; Time complexity is O(1)
    printVector(v); //we will get 3 3 3 3 



    // we can directly copy vectors easily
    vector<int> v2 = v; //any change in v2 does not change v // time complexity of making a copy is O(n)
    // vector<int> &v2 = v; 
    v2.push_back(5);
    printVector(v2);
}