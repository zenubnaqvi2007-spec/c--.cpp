#include<iostream>
using namespace std;
int main() {
    int var=27;
    //storing address of var variable
    int*ptr=&var ;
    //access value using dereferencing operator (*)
    cout<<*ptr;
    return 0;
}