#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& a, long long k) {
    int n = a.size();
    int left = 0, right = 0;
    long long sum = 0;
    int maxLen = 0;

    while (right < n) {
        sum += a[right];  // expand window

        // shrink window from left if sum > k
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // check if current window's sum is exactly k
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;  // move window forward
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    long long k = 12;

    int result = longestSubarrayWithSumK(arr, k);
    cout << "Length of longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
