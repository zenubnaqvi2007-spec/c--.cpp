#include<iostream>
using namespace std;
int argumentFunction(int a ,int b){
    return a+b;
}
int main(){
    int a =2 , b=3;
    cout<< argumentFunction(a,b);
    return 0;
}