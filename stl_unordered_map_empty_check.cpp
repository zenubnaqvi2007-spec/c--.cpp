#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> ump1, ump2;
    ump1[1] = 2;
    ump1[3] = 4;
    ump1[5] = 6;
    ump1[7] = 8;
    cout << "ump1 size = " << ump1.size() << endl;
    cout << "ump2 size = " << ump2.size() << endl;
    if (ump1.empty())
        cout << "True\n";
    else
        cout << "False\n";
    if (ump2.empty())
        cout << "True\n";
    else
        cout << "False\n";
    ump1.clear();
    if (ump1.empty())
        cout << "True\n";
         else
        cout << "False\n";
 return 0;
}