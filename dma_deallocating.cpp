#include <iostream>
using namespace std;

int main() {
    int *ptr = new int[5];
    *(ptr + 2) = 10;         
    delete[] ptr;            
    ptr = NULL;          
}