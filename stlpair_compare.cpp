#include <iostream>
using namespace std;

int main(){
    pair<int, int> p1 = {3, 5};
    pair<int, int> p2 = {3, 7};
    pair<int, int> p3 = {2, 5};

    cout << "p1 == p2: " << (p1 == p2) << endl;
    cout << "p1 != p3: " << (p1 != p3) << endl;
    cout << "p1 > p3: " << (p1 > p3) << endl;
    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 >= p3: " << (p1 >= p3) << endl;
    cout << "p3 <= p1: " << (p3 <= p1);
    return 0;
}