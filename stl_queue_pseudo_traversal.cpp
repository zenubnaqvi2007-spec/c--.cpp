#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Create a copy
    queue<int> temp(q);

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}