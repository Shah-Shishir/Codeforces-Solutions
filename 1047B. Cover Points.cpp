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

int main ()
{
    lld n,pos,a,b,ans;

    while (sf ("%lld",&n) != EOF)
    {
        ans = 0;

        for (pos=1; pos<=n; pos++)
        {
            sf ("%lld %lld",&a,&b);
            ans = max (ans,a+b);
        }

        pf ("%lld\n",ans);
    }

    return 0;
}
