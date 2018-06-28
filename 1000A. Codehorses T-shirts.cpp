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

    int n,i,ans;
    vector <string> v;
    char str[5];

    v.pb("M");
    v.pb("S");
    v.pb("XS");
    v.pb("XXS");
    v.pb("XXXS");
    v.pb("L");
    v.pb("XL");
    v.pb("XXL");
    v.pb("XXXL");

    while (sf ("%d",&n) != EOF)
    {
        map <string,int> x,y;

        for (i=1; i<=n; i++)
        {
            sf ("%s",str);
            x[str]++;
        }

        for (i=1; i<=n; i++)
        {
            sf ("%s",str);
            y[str]++;
        }

        ans = 0;

        for (i=0; i<9; i++)
            ans += min (x[v[i]],y[v[i]]);

        pf ("%d\n",n-ans);

        x.clear();
        y.clear();
    }

    return 0;
}
