#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int binarySearchRecursive(vector<int>& nums, int left, int right, int target) {
    if (left > right) {
        return -1;  // Base case: not found
    }

    int mid = left + (right - left) / 2;

    if (nums[mid] == target) {
        return mid; // Target found
    } else if (nums[mid] < target) {
        // Search right half
        return binarySearchRecursive(nums, mid + 1, right, target);
    } else {
        // Search left half
        return binarySearchRecursive(nums, left, mid - 1, target);
    }
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int index = binarySearchRecursive(nums, 0, nums.size() - 1, target);

    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
//done uuh
