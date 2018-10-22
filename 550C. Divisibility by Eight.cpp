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

char str[105];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,k,ans,len;

    sf ("%s",str);

    len = strlen(str);

    for (i=0; i<len; i++)
    {
        j = str[i]-'0';

        if (j % 2 == 0)
        {
            if (j == 0 || j == 8)
            {
                pf ("YES\n%d\n",j);
                return 0;
            }
        }
    }

    for (i=len-1; i>=0; i--)
    {
        for (j=i-1; j>=0; j--)
        {
            ans = (str[i]-'0')+10*(str[j]-'0');

            if (ans % 8 == 0)
            {
                pf ("YES\n%d\n",ans);
                return 0;
            }
        }
    }

    for (i=len-1; i>=0; i--)
    {
        for (j=i-1; j>=0; j--)
        {
            for (k=j-1; k>=0; k--)
            {
                ans = (str[i]-'0')+10*(str[j]-'0')+100*(str[k]-'0');

                if (ans % 8 == 0)
                {
                    pf ("YES\n%d\n",ans);
                    return 0;
                }
            }
        }
    }

    pf ("NO\n");

    bair_ho;
}
