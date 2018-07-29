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

lld strtolld (char str[])
{
    lld ans = 0;

    for (int i=0; str[i]; i++)
        ans = ans*10+(str[i]-'0');

    return ans;
}

bool isLarger (lld n)
{
    lld x,y = n%10;

    while (n)
    {
        x = n%10;
        n /= 10;
    }

    if (x > y)
        return true;

    return false;
}

int main (void)
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    char a[22],b[22];
    lld l,x,y,m,n;

    while (sf ("%s %s",a,b) != EOF)
    {
        x = strtolld(a)-1;
        y = strtolld(b);

        if (x == 0)
            m = 0;
        else
        {
            l = floor(log10(x))+1;

            if (l == 1)
                m = x;
            else
                m = (x/10)+9;
        }

        l = floor(log10(y))+1;

        if (l == 1)
            n = y;
        else
            n = (y/10)+9;

        if (isLarger(x) && m > 0)
            --m;

        if (isLarger(y) && n > 0)
            --n;

        pf ("%lld\n",n-m);
    }

    return 0;
}
