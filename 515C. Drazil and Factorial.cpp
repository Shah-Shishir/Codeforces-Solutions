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

char str[20];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,k;

    while (sf ("%d\n%s",&n,str) != EOF)
    {
        vi v;

        for (i=0; i<n; i++)
        {
            if (str[i] == '0' || str[i] == '1')
                continue;

            if (str[i] == '2')
                v.pb(2);
            else if (str[i] == '3')
                v.pb(3);
            else if (str[i] == '4')
                v.pb(2), v.pb(2), v.pb(3);
            else if (str[i] == '5')
                v.pb(5);
            else if (str[i] == '6')
                v.pb(3),v.pb(5);
            else if (str[i] == '7')
                v.pb(7);
            else if (str[i] == '8')
                v.pb(2), v.pb(2), v.pb(2), v.pb(7);
            else
                v.pb(2), v.pb(3), v.pb(3), v.pb(7);
        }

        sort (v.begin(),v.end());

        n = v.size();

        for (i=n-1; i>=0; i--)
            pf ("%d",v[i]);

        pf ("\n");
    }


    bair_ho;
}
