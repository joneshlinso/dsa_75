#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n;
    int temp[d];

    // Step 1: Store first d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift remaining elements left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Step 3: Copy temp elements to end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n = 5, d = 2;
    int arr[] = {1, 2, 3, 4, 5};

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
