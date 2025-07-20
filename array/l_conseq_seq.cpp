#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 1;

        for (auto num : st) {
            // Only start counting if 'num - 1' is not in the set
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int count = 1;

                // Count up while next numbers exist
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Sequence Length: " << sol.longestConsecutive(nums) << endl;
    return 0;
}
