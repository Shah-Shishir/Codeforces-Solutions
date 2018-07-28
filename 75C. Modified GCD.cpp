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

    int a,b,n,i,j,l,r,x;
    bool k;

    while (sf ("%d %d",&a,&b) != EOF)
    {
        sf ("%d",&n);

        map <int,int> mp;
        vector <int> v;

        for (i=1; i*i<=a; i++)
        {
            if (a % i == 0)
            {
                if (i * i == a)
                    mp[i] = 1;
                else
                    mp[i] = mp[a/i] = 1;
            }
        }

        for (i=1; i*i<=b; i++)
        {
            if (b % i == 0)
            {
                if (i * i == b)
                    ++mp[i];
                else
                    ++mp[i], ++mp[b/i];
            }
        }

        map <int,int> :: iterator it;

        for (it=mp.begin(); it!=mp.end(); it++)
            if (it->second >= 2)
                v.pb(it->first);

        mp.clear();

        for (i=1; i<=n; i++)
        {
            sf ("%d %d",&l,&r);

            x = upper_bound(v.begin(),v.end(),r)-v.begin();
            --x;

            if (v[x] < l || x == -1)
                pf ("-1");
            else
                pf ("%d",v[x]);

            pf ("\n");
        }
    }

    return 0;
}
