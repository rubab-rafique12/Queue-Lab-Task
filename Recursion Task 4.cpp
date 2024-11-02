#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) // base case: 0! = 1! = 1
        return 1;
    return n * factorial(n - 1); // recursive call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
