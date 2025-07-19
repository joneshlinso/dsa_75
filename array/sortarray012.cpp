/** this is dutch  national flag algo where we sort a given array of 012s with 3 pinters low high and mid and assume that the 
 * part between mid to high is unsorted and the goal is to reduce the size between mid to high but sorting the mid
 * poninter will move everytime llike if it had 0 it will swap between low and mid and mid++ and for 2 mid and high high--
 * and for 1 it will just mid++
 */


#include <bits/stdc++.h>
using namespace std;

void sortarray(vector<int>& arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {0,1,1,0,1,2,1,2,0,0,0};
    sortarray(arr);

    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
