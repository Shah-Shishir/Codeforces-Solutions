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

char a[100005],b[100005];

int main (void)
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    lld n,double_zero,zero,one,only_one,ans,i;

    while (sf ("%lld",&n) != EOF)
    {
        sf ("%s\n%s",a,b);

        double_zero = zero = one = only_one = 0;

        for (i=0; i<n; i++)
        {
            if (a[i] == b[i] && a[i] == '0')
                ++double_zero;

            if (a[i] == '1')
                ++one;
            else
                ++zero;

            if (a[i] == '1' && b[i] == '0')
                ++only_one;
        }

        ans = (double_zero*one)+(zero-double_zero)*only_one;

        pf ("%lld\n",ans);
    }

    return 0;
}
