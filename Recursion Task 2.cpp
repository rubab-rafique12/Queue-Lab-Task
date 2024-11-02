#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    // Base case: If the range is invalid, the element is not found
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;  // Calculate the middle index

    // Check if the middle element is the target
    if (arr[mid] == target) {
        return mid;  // Target found at index mid
    }
    // If the target is smaller, search the left half
    else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }
    // If the target is larger, search the right half
    else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int arr[] = {2, 4, 7, 10, 23, 38, 45, 57, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
