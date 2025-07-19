#include <iostream>
#include <vector>
#include <unordered_map>

std::pair<int, int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_map.count(complement)) {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i;
    }
    return {-1, -1}; // Not found
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto result = twoSum(nums, target);
    if (result.first != -1) {
        std::cout << "Indices: " << result.first << ", " << result.second << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }
    return 0;
}