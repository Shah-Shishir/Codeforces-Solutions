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

int main (void)
{
    llu n,k,i;

    while (sf ("%llu %llu",&n,&k) != EOF)
    {
        vector <llu> v;

        for (i=1; i*i<=n; i++)
        {
            if (n % i == 0)
            {
                v.pb (i);

                if ((n/i) != i)
                    v.pb (n/i);
            }
        }

        sort (v.begin(),v.end());

        if (v.size() < k)
            pf ("-1\n");
        else
            pf ("%llu\n",v[k-1]);
    }

    return 0;
}
