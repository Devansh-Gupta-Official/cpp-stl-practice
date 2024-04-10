#include <iostream>
#include <queue>
using namespace std;

int main(){
    //queue is FIFO
    //Enqueue
    //Dequeue
    //front element seeing

    queue<string> q;
    q.push("abcv");
    q.push("fgg");
    q.push("akjl");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}