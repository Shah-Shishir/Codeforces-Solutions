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

int arr[105];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,maxi,mini,ans,pmaxi,pmini;

    while (sf ("%d",&n) != EOF)
    {
        maxi = -1, mini = 101, pmaxi = pmini = 0;

        for (i=0; i<n; i++)
        {
            sf ("%d",&arr[i]);

            if (arr[i] > maxi)
            {
                maxi = arr[i];
                pmaxi = i;
            }
        }

        ans = 0;

        for (i=pmaxi; i>=1; i--)
        {
            swap (arr[i],arr[i-1]);
            ++ans;
        }

        for (i=0; i<n; i++)
        {
            if (arr[i] <= mini)
            {
                mini = arr[i];
                pmini = i;
            }
        }

        for (i=pmini; i<n-1; i++)
        {
            swap (arr[i],arr[i+1]);
            ++ans;
        }

        pf ("%d\n",ans);
    }

    bair_ho;
}
