#include<iostream>
using namespace std;
int main() {
    int arr[5]={23,64,98,47,59};
    int target=98;
    for(int i=0;i<5;i++) {
        if (arr[i]== target) {
            cout<<"found index "<<i;
            break;
        }
    }
}