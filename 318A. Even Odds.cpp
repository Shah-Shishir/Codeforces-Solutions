/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;

#define sf scanf
#define pf printf

int main ()
{
    long long n,k,res;

    while (cin >> n >> k)
    {
        if (n & 1)
        {
            res = n/2 + 1;

            if (k <= res)
                cout << 2 * k -1 << endl;
            else
                cout << 2 * (k - res) << endl;
        }
        else
        {
            res = n/2;

            if (k <= res)
                cout << 2 * k - 1 << endl;
            else
                cout << 2 * (k - res) << endl;
        }
    }

    return 0;
}
