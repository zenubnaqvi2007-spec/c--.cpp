#include<iostream>
using namespace std;
int main () {
    int n=27;
    int* ptr=&n;
    cout<<"address stored in ptr:"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"adding 1 to ptr:"<<ptr<<endl;
    ptr=ptr+2;
    cout<<"adding 2 to ptr:"<<ptr<<endl;
    return 0;
}