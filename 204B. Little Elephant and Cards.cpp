/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int main (void)
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,a,b,m,val,x,y,need,has,ans;

    while (sf ("%d",&n) != EOF)
    {
        map <int,int> fr,bk,same,E;

        for (i=1; i<=n; i++)
        {
            sf ("%d %d",&a,&b);

            fr[a]++;
            bk[b]++;
            E[a]++;
            E[b]++;

            if (a == b)
                same[a]++;
        }

        map <int,int> :: iterator it;

        m = (n+1)/2;

        for (it=fr.begin(); it!=fr.end(); it++)
        {
            if (it->second >= m)
            {
                pf ("0\n");
                return 0;
            }
        }

        ans = INT_MAX;

        for (it=E.begin(); it!=E.end(); it++)
        {
            val = it->first;
            x = fr[val];
            y = bk[val];
            need = m-x;
            has = y-same[val];

            if (has >= need)
                ans = min (ans,need);
        }

        if (ans == INT_MAX)
            pf ("-1\n");
        else
            pf ("%d\n",ans);

        fr.clear();
        bk.clear();
        same.clear();
        E.clear();
    }

    return 0;
}
