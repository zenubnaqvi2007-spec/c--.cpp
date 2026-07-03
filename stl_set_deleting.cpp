#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4};

    // Deleting by value
    s.erase(2);

    // Deleting by iterator
    s.erase(s.begin());

    // Traversing the set
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    return 0;
}