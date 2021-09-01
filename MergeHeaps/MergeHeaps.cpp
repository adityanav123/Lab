#include <bits/stdc++.h>
using namespace std;
void maxHeapify(vector < int > & arr, int i) {
    int largest = i;

    // Find largest element in current node and its left & right child and assign its index to variable 'largest'.
    if (2 * i + 1 < arr.size() && arr[largest] < arr[2 * i + 1]) {
        largest = 2 * i + 1;
    }
    if (2 * i + 2 < arr.size() && arr[largest] < arr[2 * i + 2]) {
        largest = 2 * i + 2;
    }

    swap(arr[largest], arr[i]);

    if (i != largest) {
        
        // Recursively call heapify in subtree.
        maxHeapify(arr, largest);
    }
}

vector < int > mergeHeap(vector < int > & arr1, vector < int > & arr2) {
    
    // Size of arrays.
    int n = arr1.size();
    int m = arr2.size();

    // Merge both arrays.
    vector < int > merged(n + m);
    for (int i = 0; i < n + m; i++) {
        if (i < n) {
            merged[i] = arr1[i];
        } else {
            merged[i] = arr2[i - n];
        }
    }

    // Convert 'merged' array into max-heap
    for (int i = (n + m) / 2 - 1; i >= 0; i--) {
        maxHeapify(merged, i);
    }

    return merged;
}
void create_maxheap(vector<int> &a) {
    int i = a.size() / 2 - 1;
    for (; i >= 0; i--) {
        maxHeapify(a, i);
    }
}

int main() {
    vector<int> a1 = {1, 2, 3, 4, 6, 7};
    vector<int> b1 = {10, 11, 240, 2, 0};

    create_maxheap(a1);
    create_maxheap(b1);
    vector<int> merged = mergeHeap(a1, b1);
    for (auto x : merged) {
        cout << x << " ";
    }cout << "\n";
    return 0;
}
