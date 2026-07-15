#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, double> ra;

    cout << "Initial size of map = "
         << ra.size() << endl;

    ra = {
        { "Geeks", 1.556 },
        { "For", 2.567 },
        { "Geeks", 3.345 },
        { "GeeksForGeeks", 4.789 },
        { "GFG", 5.998 }
    };

    cout << "size of map = "
         << ra.size() << endl;

    return 0;
}