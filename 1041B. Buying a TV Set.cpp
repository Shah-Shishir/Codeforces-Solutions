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

lld gcd (lld a, lld b)
{
    if (b == 0)
        return a;
    else
        return gcd (b,a%b);
}

int main ()
{
    lld a,b,x,y,g,p,q,ans;

    while (sf ("%lld %lld %lld %lld",&a,&b,&x,&y) != EOF)
    {
        g = gcd (x,y);

        x /= g;
        y /= g;

        ans = 0;

        if (x > a || y > b)
            pf ("%lld\n",ans);
        else
        {
            p = a/x;
            q = b/y;
            ans = min (p,q);

            pf ("%lld\n",ans);
        }
    }

    return 0;
}
