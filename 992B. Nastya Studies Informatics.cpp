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

int gcd (int a,int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int main (void)
{
    /*
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    */

    lld l,r,a,b,x,y,G,L,i,j;

    while (sf ("%lld %lld %lld %lld",&l,&r,&a,&b) != EOF)
    {
        vector <int> v;

        for (i=1; i*i<=b; i++)
        {
            if (b % i == 0)
            {
                v.pb(i);

                if (i != b/i)
                    v.pb(b/i);
            }
        }

        sort (v.begin(),v.end());

        int len = v.size();
        int ans = 0;

        for (i=0; i<len; i++)
        {
            for (j=0; j<len; j++)
            {
                x = v[i], y = v[j];

                G = gcd(x,y);
                L = (x*y)/G;

                if (G == a && L == b && x >= l && x <= r && y >= l && y <= r)
                    ++ans;
            }
        }

        pf ("%d\n",ans);

        v.clear();
    }

    return 0;
}
