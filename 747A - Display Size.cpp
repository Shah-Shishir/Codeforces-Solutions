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

int arr[1000000];

int main ()
{
    int n,i,c,k;

    while (cin >> n)
    {
        c = 0, k = 0;

        for (i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                arr[k] = i;
                k = k + 1;;
                c = c + 1;
            }
        }

        c = c - 1;

        if (c & 1)
            pf ("%d %d\n",arr[c/2],arr[c/2+1]);
        else
            pf ("%d %d\n",arr[c/2],arr[c/2]);
    }

    return 0;
}
