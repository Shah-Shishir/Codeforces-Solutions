/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
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

int main (void)
{
    int m,d,n;

    while (cin >> m >> d)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d == 6 || d == 7)
                n = 6;
            else
                n = 5;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d == 7)
                n = 6;
            else
                n = 5;
        }
        else
        {
            if (d == 1)
                n = 4;
            else
                n = 5;
        }

        cout << n << endl;
    }

    return 0;
}
