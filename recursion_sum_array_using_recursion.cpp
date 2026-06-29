#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    // Base case: no elements left
    if (n == 0) {
        return 0;
    }
    // Recursive case: first element + sum of rest
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << sumArray(arr, n);
    return 0;
}