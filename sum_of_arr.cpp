#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,8,7,56,90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i=0; i<size ; i++) {
        sum += arr[i];
    }
    cout <<"sum:"<<sum<<endl;
    return 0;
}