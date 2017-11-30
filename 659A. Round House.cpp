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
#define eof while (cin >> n)
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

int main (void)
{
    int n,a,b,ans;

    while (sf ("%d %d %d",&n,&a,&b) != EOF)
    {
        if (b == 0)
            pf ("%d\n",a);
        else if (b > 0)
        {
            ans = (a + (b % n)) % n;

            if (ans == 0)
                ans = n;

            pf ("%d\n",ans);
        }
        else if (b < 0)
        {
            ans = ((n + a)-(abs(b) % n)) % n;

            if (ans == 0)
                ans = n;

            pf ("%d\n",ans);
        }
    }

    return 0;
}
