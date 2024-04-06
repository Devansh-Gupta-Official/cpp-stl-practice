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
    vector<vector<int>> v;  //to make number of rows also dynamic
    int N; //number of vectors to be taken
    cin>>N;
    for (int i =0;i<N;++i){
        int n; //size of each respective vector
        cin >>n;
        vector <int> temp;  //temporary vector
        for(int j =0;j<n;++j){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    v[0].push_back(10); //can increase number of columns easily
    v.push_back(vector<int> ()); //can increase number of rows easily
    for(int i =0;i<v.size();++i){
        printVector(v[i]);
    }
    cout<<v[0][0];
}


//********difference between array of vectors and vectors of vectors is that in array of vectors, number of rows is fixed but in vector of vectors, they can be changed using push_back or pop_out functions.**********//