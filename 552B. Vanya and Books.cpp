/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe int main (void)
#define bair_ho return 0
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

lld mini (lld a, lld b)
{
    if (a <= b)
        return a;

    return b;
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    lld n,ans,x;

    while (sf ("%lld",&n) != EOF)
    {
        ans = mini(n,9);

        if (n >= 10)
            ans += (mini(n,99)-9)*2;

        if (n >= 100)
            ans += (mini(n,999)-99)*3;

         if (n >= 1000)
            ans += (mini(n,9999)-999)*4;

        if (n >= 10000)
            ans += (mini(n,99999)-9999)*5;

        if (n >= 100000)
            ans += (mini(n,999999)-99999)*6;

        if (n >= 1000000)
            ans += (mini(n,9999999)-999999)*7;

        if (n >= 10000000)
            ans += (mini(n,99999999)-9999999)*8;

        if (n >= 100000000)
            ans += (mini(n,999999999)-99999999)*9;

        if (n >= 1000000000)
            ans += (mini(n,9999999999)-999999999)*10;

        pf ("%lld\n",ans);
    }

    bair_ho;
}
