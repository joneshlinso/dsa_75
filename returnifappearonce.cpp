#include<iostream>
#include<vector>
using namespace std;

int Appearonce(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                cnt++;
            }
        }
        if (cnt == 0) {
            return arr[i];  // This element appears only once
        }
    }
    return -1;  // If no such element
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int result = Appearonce(arr);
    cout << "ans: " << result << endl;
    return 0;
}
