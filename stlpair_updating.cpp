#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair<int, string> p = {1, "Geeks"};

    p.first = 2;
    p.second = "ForGeeks";
    cout << p.first << " " << p.second;
    return 0;
}