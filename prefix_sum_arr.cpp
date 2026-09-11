#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[5]={23,45,12,78,45};
    vector<int> prefix(5);

prefix[0] = arr[0];

for(int i = 1; i <(5);i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
}