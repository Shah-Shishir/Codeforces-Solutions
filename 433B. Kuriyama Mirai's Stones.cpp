/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si		    set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

lld a[100005],b[100005];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,m,t,l,r;

    while (sf ("%d",&n) != EOF)
    {
        a[0] = b[0] = 0;

        for (i=1; i<=n; i++)
        {
            sf ("%lld",&a[i]);
            b[i] = a[i];
        }

        for (i=2; i<=n; i++)
            a[i] += a[i-1];

        sort (b,b+n+1);

        for (i=2; i<=n; i++)
            b[i] += b[i-1];

        sf ("%d",&m);

        for (i=1; i<=m; i++)
        {
            sf ("%d %d %d",&t,&l,&r);

            if (t == 1)
                pf ("%lld",a[r]-a[l-1]);
            else
                pf ("%lld",b[r]-b[l-1]);

            pf ("\n");
        }
    }

    bair_ho;
}
