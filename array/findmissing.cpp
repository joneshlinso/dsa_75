#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int n = arr.size();
    int diff = (arr[n - 1] - arr[0]) / n;  // Expected difference in AP

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] != diff) {
            return arr[i] + diff;
        }
    }

    return -1; // No missing number
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 6};
    int result = findMissing(arr);
    cout << "Missing number: " << result << endl;
    return 0;
}
