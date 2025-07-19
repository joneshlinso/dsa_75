#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;
    for(int num : nums) {
        if(num >= 0) pos.push_back(num);
        else neg.push_back(num);
    }

    vector<int> ans;
    int i = 0, j = 0;

    while(i < pos.size() && j < neg.size()) {
        ans.push_back(pos[i++]);
        ans.push_back(neg[j++]);
    }

    // Append leftovers if any
    while(i < pos.size()) ans.push_back(pos[i++]);
    while(j < neg.size()) ans.push_back(neg[j++]);

    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged: ";
    for(int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
