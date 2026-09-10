#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    vector<int> arr={23,77,46,52,20};
    cout<<arr[2]<<endl;
    arr.push_back(88);
    arr.push_back(99);
    arr.pop_back();
    arr.front();
    arr.back();
    arr.empty();
    cout<<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

}