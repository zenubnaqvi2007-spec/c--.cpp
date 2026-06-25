#include<iostream>
using namespace std;
int main() {
    int n=27;
    int* ptr= &n;
    cout<<"size of int:"<<sizeof(int)<<endl;
    cout<<"before increment:"<<ptr<<endl;
    ptr++;
    cout<<"after increment:"<<ptr<<endl;
    cout<<"before decrement:"<<ptr<<endl;
    ptr--;
    cout<<"after decrement:"<<ptr;
    return 0;
}