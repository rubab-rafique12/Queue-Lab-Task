#include <iostream>
using namespace std;

int recursiveSum(int arr[], int size) {
    if (size == 0) // base case: if array size is 0, sum is 0
        return 0;
    return arr[size - 1] + recursiveSum(arr, size - 1); // recursive call
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of elements in array: " << recursiveSum(arr, size) << endl;
    return 0;
}
