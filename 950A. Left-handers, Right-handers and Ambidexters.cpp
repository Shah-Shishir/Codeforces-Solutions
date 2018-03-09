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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

int main ()
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int l,r,a,res;

    while (sf ("%d %d %d",&l,&r,&a) != EOF)
    {
        if (l == r)
        {
            res = 2*l+a;

            if (res & 1)
                --res;
        }
        else
        {
            int m = min (l,r);
            int d = abs (l-r);

            if (d >= a)
            {
                m += a;
                res = m+m;
            }
            else
            {
                m = max (l,r);
                a -= d;

                if (a & 1)
                    --a;

                res = m+m+a;
            }
        }

        pf ("%d\n",res);
    }

    return 0;
}
