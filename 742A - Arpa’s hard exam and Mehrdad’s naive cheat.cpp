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

int bigmod (int base, int power, int mod);

int main ()
{
    int p;

    while (cin >> p)
        cout << bigmod (1378,p,10) << endl;

    return 0;
}

int bigmod (int base, int power, int mod)
{
    int p1,p2;

    if (power == 0)
        return 1;
    else if (power & 1)
    {
        p1 = base % mod;
        p2 = (bigmod (base, power-1, mod)) % mod;

        return (p1 * p2) % mod;
    }
    else if (power % 2 == 0)
    {
        p1 = (bigmod (base, power/2, mod)) % mod;

        return (p1 * p1) % mod;
    }
}
