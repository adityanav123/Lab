#include <bits/stdc++.h>
using namespace std; 
int lastStoneWeight(vector<int>& stones) {
        
        //max heap
        
        priority_queue<int> pq;
        
        for (int i = 0; i < stones.size(); i++)
                pq.push(stones[i]);
        
        
        while(pq.size() > 1) {
            
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            if(x != y)
                pq.push(x-y);
            
            
        }
        
        if(pq.empty())
            return 0;
        else
            return pq.top();
            
    }
int main() {
    int noOfStones = 6;
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    cout << "last stone weight : " << lastStoneWeight(stones) << "\n";
    return 0;
}
