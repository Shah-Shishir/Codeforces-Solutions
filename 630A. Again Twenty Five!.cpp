/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
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
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    /***

    We need to determine (5^n % 100) in this problem. But for any n>=2 the value is always 25. ;)

    Example,
    n = 2, 5^2 % 100 = 25 % 100 = 25
    n = 3, 5^3 % 100 = 125 % 100 = 25
    n = 4, 5^4 % 100 = 625 % 100 = 25
    n = 5, 5^5 % 100 = 3125 % 100 = 25
    and so on.

    ***/

    llu n;

    while (sf ("%llu",&n) != EOF)
        pf ("25\n");

    return 0;
}
