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
    int n,k,i,sum,res,c;

    while (cin >> n >> k)
    {
        res = 240 - k, sum = 0, c = 0;

        for (i=1; i<=n; i++)
        {
            sum += 5 * i;

            if (sum > res)
                break;

            c = c + 1;
        }

        cout << c << endl;
    }

    return 0;
}
