#include<iostream>
using namespace std;
int main() {
    int a=11;
    int b=27;
    int* ptr=&a;
    cout<< * ptr<<endl;
    //changing the address stored
    ptr =&b;
    cout<<*ptr;
    return 0;
}