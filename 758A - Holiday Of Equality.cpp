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
    int n,i,max;

    while (cin >> n)
    {
        int arr[n],sum = 0;

        for (i=0; i<n; i++)
            cin >> arr[i];

        sort (arr,arr+i);

        max = arr[n-1];

        for (i=0; i<n-1; i++)
            sum += abs (max - arr[i]);

        cout << sum << endl;
    }

    return 0;
}
