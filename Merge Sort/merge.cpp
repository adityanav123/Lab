#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a = {8470, 6337, 6503, 9172, 5727, 1481, 9361, 6965, 4467, 5708, 8148, 3284, 6830, 9964, 494, 2998, 1945, 4830, 5439, 2394, 4607, 3905, 156, 295, 2385, 7424, 8719, 9721, 9898, 5450, 1729, 4774, 1541, 1872, 9915, 5670, 6302, 7038, 9897, 8706, 3814, 1325, 336};
    sort(a.begin(), a.end());
    for (auto x : a) {
        cout << x << " ";
    }cout << "\n";
    return 0;
}
