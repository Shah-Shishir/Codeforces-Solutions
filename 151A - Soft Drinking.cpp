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
    int n,k,l,c,d,p,nl,np,x,y,z;

    while (cin >> n)
    {
        cin >> k >> l >> c >> d >> p >> nl >> np;

        x = (k * l) / nl;
        y = c * d;
        z = p / np;

        cout << min((min (x,y)),z) / n << endl;
    }

    return 0;
}
