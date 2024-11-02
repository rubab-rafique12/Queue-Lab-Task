#include <iostream>
using namespace std;

int recursiveLinearSearch(int arr[], int size, int target) {
    if (size == 0) // base case: if size is 0, target not found
        return -1;
    if (arr[size - 1] == target) // check last element
        return size - 1; // return index if target found
    return recursiveLinearSearch(arr, size - 1, target); // recursive call
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = recursiveLinearSearch(arr, size, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
