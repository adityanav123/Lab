#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n = 48, k = 24;
    vector<int> arr = {5534, 4461, 9275, 6533, 2137, 2584, 438, 1670, 9163, 6817, 9645, 979, 2530, 3826, 1097, 1771, 9247, 3827, 4024, 810, 9299, 6729, 4266, 3643, 1065, 9050, 5083, 750, 5331, 116, 1186, 6762, 2746, 6894, 1497, 7364, 9136, 8575, 8654, 8257, 8473, 3022, 3977, 8824, 825, 1913, 1455, 251};

    priority_queue<int, vector<int>, greater<int>> pq;
        
        vector<int> res;
        
        for(int i = 0; i < n; i++)
        {
            if(pq.size() < k)
            {
                pq.push(arr[i]);
            }
            else if(pq.size() == k)
            {
                if(pq.top() < arr[i])
                {
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
            
            if(pq.size() < k)
            {
                res.push_back(-1);
            }
            else
            {
                res.push_back(pq.top());
            }
        }
    for (auto x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
