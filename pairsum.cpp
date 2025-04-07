#include<iostream>
#include<vector>

using namespace std;

vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while(i < j) {
        int sum = nums[i] + nums[j];
        if(sum > target) {
            j--;
        }
        else if(sum < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans; // return empty if no pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairsum(nums, target);
    if (!ans.empty())
        cout << ans[0] << "," << ans[1] << endl;
    else
        cout << "No pair found." << endl;

    return 0;
}
