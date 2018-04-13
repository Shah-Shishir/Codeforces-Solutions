#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string a,b,c;

    while (cin >> a >> b)
    {
        c = string (a.rbegin(),a.rend());

        if (c == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
