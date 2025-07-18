#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (nums[i] < nums[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(nums);

    cout << "Leaders in the array are: ";
    for (int leader : result) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
