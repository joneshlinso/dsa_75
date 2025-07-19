#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumSubarray(const vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) {
        cout << "Window size larger than array.\n";
        return -1;
    }

    int windowSum = 0;
    int maxSum = INT_MIN;

    // Compute sum of first window
    for (int i = 0; i < k; ++i) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; ++i) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << "Max sum of subarray of size " << k << " is: " << maxSumSubarray(arr, k) << endl;

    return 0;
}
