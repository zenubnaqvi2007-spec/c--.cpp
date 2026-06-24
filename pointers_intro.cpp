#include<iostream>
using namespace std;
int main() {
    int var=10;
    int*ptr=&var; //here we are declaring pointer and storing address of var
    cout<<"value of var :" <<var<<endl;
    cout<<"address of var :"<<&var<<endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    return 0;
}