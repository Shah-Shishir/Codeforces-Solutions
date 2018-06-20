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

int A[125],B[125],C[125];
int n,ma,mb,mc,l1,l2,l3;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    string a,b,c;

    while (sf("%d",&n) != EOF)
    {
        cin >> a >> b >> c;

        memset (A,0,sizeof A);
        memset (B,0,sizeof B);
        memset (C,0,sizeof C);

        ma = mb = mc = 0;

        for (char x : a)
            ma = max (ma,++A[x]);

        for (char x : b)
            mb = max (mb,++B[x]);

        for (char x : c)
            mc = max (mc,++C[x]);

        l1 = a.length(), l2 = b.length(), l3 = c.length();

        if (n == 1 && ma == l1)
            a.pop_back();

        if (n == 1 && mb == l2)
            b.pop_back();

        if (n == 1 && mc == l3)
            c.pop_back();

        l1 = a.length(), l2 = b.length(), l3 = c.length();

        ma = min (ma+n,l1);
        mb = min (mb+n,l2);
        mc = min (mc+n,l3);

        if (ma > mb && ma > mc)
            pf ("Kuro");
        else if (mb > ma && mb > mc)
            pf ("Shiro");
        else if (mc > ma && mc > mb)
            pf ("Katie");
        else
            pf ("Draw");

        pf ("\n");
    }

    return 0;
}
