#include<iostream>
using namespace std;
int main() {
    int arr[5]={12,23,34,56,43};
    int largest = arr[0];
    for(int i=1 ; i<5 ; i++) {
        if (arr[i]>largest) {
            largest=arr[i];  
        }
    }
     cout<<"largest is:"<<largest<<endl;
}