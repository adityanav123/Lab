#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n = 6, k = 4;
    vector<int> a = {1, 2, 3, 4, 5, 6};

    priority_queue<int, vector<int>, greater<int>> minheap;
    for (auto x : a) {
        minheap.push(x);
    }

    int idx = 0;

    vector<int> ans(a.size());

    while (idx < a.size()) {
        if(idx >= k-1) {
            ans[idx] = minheap.top();
            minheap.pop();
        }
        else {
            ans[idx] = -1;
        }
        ++idx;
    }
    for (auto x : ans) cout << x << " ";
    cout << "\n";
    return 0;
}
