#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
// #include "heap.cpp"
using namespace std;

int solve(vector<int> &a, int n) {
	priority_queue<int, vector<int>, greater<int>> minheap;
	for (auto val : a) {
		minheap.push(val);
	}
  int final_cost = 0;
	while(minheap.size() > 1) {
    int a = minheap.top();
    minheap.pop();
    int b = minheap.top();
    minheap.pop();
    final_cost += (a + b);
    minheap.push(a + b);
  }
	return final_cost;
}

int main() {
	int n = 4;
	vector<int> a = {4, 3, 2, 6};
	// cout << "hello!\n";
	cout << solve(a, n) << "\n";
	return 0;
}