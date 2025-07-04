#include <iostream>
#include<vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;

    vector<int> unionArr;

    // Merge both arrays while removing duplicates
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Add remaining elements from b[]
    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    // Add remaining elements from a[]
    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5, 6};

    vector<int> result = sortedArray(a, b);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}

