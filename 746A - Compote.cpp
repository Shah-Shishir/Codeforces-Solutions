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
    int a,b,c;

    while (cin >> a >> b >> c)
    {
        while (1)
        {
            if (a * 2 <= b && a * 4 <= c)
            {
                cout << a + 2*a + 4*a << endl;
                break;
            }
            a = a-1;
        }
    }

    return 0;
}
