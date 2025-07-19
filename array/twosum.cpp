#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        // Return an empty vector if no solution is found
        return {};
    }
};
int main() {
    Solution sol;  // Create an object of Solution class
    vector<int> nums = {2, 7, 11, 15}; 
    int target = 9; 

    vector<int> result = sol.twoSum(nums, target); 

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}