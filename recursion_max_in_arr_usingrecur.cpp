#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    // Base case: only one element left
    if (n == 1) {
        return arr[0];
    }
    // Recursive case: compare last element with max of rest
    int restMax = findMax(arr, n - 1);
    return (arr[n - 1] > restMax) ? arr[n - 1] : restMax;
}

int main() {
    int arr[] = {3, 9, 2, 7, 1};
    int n = 5;
    cout << findMax(arr, n);
    return 0;
}