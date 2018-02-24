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

const int MOD = 1000000007;
const int MAX = 1000005;

int main ()
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,i,a,b,x;
    bool k;

    while (sf ("%d",&n) != EOF)
    {
        map <int,int> mp;
        map <int,int> :: iterator it;

        mp[0] = 0;

        for (i=1; i<=n; i++)
        {
            sf ("%d %d",&a,&b);
            mp[a] = b;
        }

       it=mp.begin();
       ++it;
       k = false;

        for (; it!=mp.end(); it++)
        {
            --it;
            x = it->second;
            ++it;

            if (x > (it->second))
            {
                k = true;
                pf ("Happy Alex\n");
                break;
            }
        }

        if (!k)
            pf ("Poor Alex\n");
    }

    return 0;
}
