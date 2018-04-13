/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

int main (void)
{
    int n,arr[105],i,m,p;

    while (cin >> n)
    {
        arr[0] = 0;

        for (i=1; i<=n; i++)
            cin >> arr[i];

        vector <int> v;

        for (i=2; i<=n; i++)
            v.pb (abs(arr[i]-arr[i-1]));

        v.pb (abs(arr[n]-arr[1]));

        m = v[0],p = 0;

        for (i=1; i<n; i++)
        {
            if (v[i] < m)
            {
                m = v[i];
                p = i;
            }
        }

        if (p == n-1)
            pf ("%d 1\n",n);
        else
            pf ("%d %d\n",p+1,p+2);
    }

    return 0;
}
