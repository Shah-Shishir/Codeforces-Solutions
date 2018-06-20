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

    lld arr[15],x[15],i,j,maxi,div,rem,sum,ans;

    for (i=1; i<15; i++)
        sf ("%lld",&arr[i]);

    ans = -1;

    for (i=1; i<15; i++)
    {
        for (j=1; j<15; j++)
            x[j] = arr[j];

        maxi = x[i];
        div = maxi / 14;
        rem = maxi % 14;
        x[i] = 0;
        sum = 0;

        for (j=i+1; j<15; j++)
        {
             x[j] += div;
             if (rem > 0)
                ++x[j];
             --rem;

             if (x[j] % 2 == 0)
                sum += x[j];
        }

        for (j=1; j<=i; j++)
        {
             x[j] += div;
             if (rem > 0)
                ++x[j];
             --rem;

             if (x[j] % 2 == 0)
                sum += x[j];
        }

        if (sum > ans)
            ans = sum;
    }

    pf ("%lld\n",ans);

    return 0;
}
