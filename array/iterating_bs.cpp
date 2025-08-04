#include <iostream>
#include <vector>

// 1. Iterative Binary Search (Recommended)
int binary_search_iterative(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Calculate mid index safely to prevent potential overflow
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found!
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }

    // Target was not found in the array
    return -1;
}

// 2. Recursive Binary Search
int binary_search_recursive(const std::vector<int>& arr, int low, int high, int target) {
    // Base case: If pointers cross, element is not present
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        // Recur on the right half
        return binary_search_recursive(arr, mid + 1, high, target);
    } else {
        // Recur on the left half
        return binary_search_recursive(arr, low, mid - 1, target);
    }
}

// Main function to demonstrate the usage
int main() {
    // Step 1: Have a SORTED vector.
    std::vector<int> my_sorted_list = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};

    // --- Case 1: Search for a target that exists ---
    int target_to_find = 23;
    std::cout << "Searching for " << target_to_find << "..." << std::endl;

    // Using the iterative version
    int index1 = binary_search_iterative(my_sorted_list, target_to_find);
    if (index1 != -1) {
        std::cout << "[Iterative] Target " << target_to_find << " found at index: " << index1 << std::endl;
    } else {
        std::cout << "[Iterative] Target " << target_to_find << " not found." << std::endl;
    }

    // Using the recursive version
    int index2 = binary_search_recursive(my_sorted_list, 0, my_sorted_list.size() - 1, target_to_find);
    if (index2 != -1) {
        std::cout << "[Recursive] Target " << target_to_find << " found at index: " << index2 << std::endl;
    } else {
        std::cout << "[Recursive] Target " << target_to_find << " not found." << std::endl;
    }

    std::cout << "----------------------------------" << std::endl;

    // --- Case 2: Search for a target that DOES NOT exist ---
    int target_to_miss = 50;
    std::cout << "Searching for " << target_to_miss << "..." << std::endl;

    int index3 = binary_search_iterative(my_sorted_list, target_to_miss);
    if (index3 != -1) {
        std::cout << "[Iterative] Target " << target_to_miss << " found at index: " << index3 << std::endl;
    } else {
        std::cout << "[Iterative] Target " << target_to_miss << " not found." << std::endl;
    }

    return 0;
}