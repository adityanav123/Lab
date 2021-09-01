#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int testCases = 1;
	while (testCases--) {
		cout << "test case=" <<testCases << "\n"; 
		int n = rand() % 100 + 2;
		cout << "n=" << n << "\n";  
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			a[i] = rand() % 10000 + 3;
		}
		for (auto x : a) {
			cout << x << ", ";
		}cout << "\n------------------------\n";
	}
	return 0;
}
