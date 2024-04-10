#include <unordered_set>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    /*Our Monk loves candy!
    While taking a stroll in the park, He stumbled upon N Bags with candies. The i'th of these bags contains A candies.
    He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies!,where [x] is the greatest integer less than x (Greatest Integer Function). In a single minute, Monk can consume all the candies in a single bag, regardless of the number of candies in it.
    Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes.
    Find the maximum number of candies that Monk can consume.
    
    Input:
    First line contains an integer T. T test cases follow.
    First line of each test case contains two space-separated integers N and K. 
    Second line of each test case contains N space-separated integers,the number of candies in the bags.
    
    Output:
    Print answer to each test case in new line 
    
    Constraints:
    1 ≤ T ≤10
    1 ≤ N ≤ 10^5
    0 ≤ k ≤ 10^5
    0 ≤ A; ≤ 10^10*/


    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        multiset<long long> bags;
        for(int i =0;i<n;i++){    //n*log(n)
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);  //O(log(n))
        }

        long long total_candies = 0;
        for(int i=0;i<k;++i){  //k*log(n)
            auto last_it = (bags.end());   //O(log(n))
            last_it--;
            long long candy_ct = *last_it;
            total_candies += candy_ct;

            bags.erase(last_it);       //O(1)
            bags.insert((candy_ct)/2);  //O(log(n))

        }
        
        cout<<total_candies<<endl;
         
    }
}