#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];      // 1️⃣ Pick the element to insert
        int j = i - 1;         // 2️⃣ Start from the element just before key

        // 3️⃣ Shift elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // shift element right
            j--;                   // move to the previous element
        }

        // 4️⃣ Insert key at the correct position
        arr[j + 1] = key;
    }
}



int main(){
    vector<int>arr = {5, 2, 4, 6, 1, 3};

}