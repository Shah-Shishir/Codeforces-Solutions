#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int t,len,i;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;

        len = str.size();

        if (len <= 10)
            cout << str << endl;
        else
        {
            i = len - 2;

            cout << str[0] << i << str[len-1] << endl;
        }
    }

    return 0;
}
