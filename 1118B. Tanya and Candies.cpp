/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const lld m = 1073741824;
const int MAX = 200005;
const double pi = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int arr[MAX],even[MAX],odd[MAX];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,ans,ODD,EVEN;

    while (sf ("%d",&n) != EOF)
    {
        for (i=1; i<=n; i++)
        {
            sf ("%d",&arr[i]);

            if (i & 1)
            {
                odd[i] = odd[i-1]+arr[i];
                even[i] = even[i-1];
            }
            else
            {
                even[i] = even[i-1]+arr[i];
                odd[i] = odd[i-1];
            }
        }

        ans = 0;

        for (i=1; i<=n; i++)
        {
            if (i & 1)
            {
                ODD = even[n]-even[i]+odd[i]-arr[i];
                EVEN = odd[n]-odd[i]+even[i];
            }
            else
            {
                ODD = even[n]-even[i]+odd[i];
                EVEN = odd[n]-odd[i]+even[i]-arr[i];
            }

            if (ODD == EVEN)
                ++ans;
        }

        pf ("%d\n",ans);

        memset (even,0,sizeof even);
        memset (odd,0,sizeof odd);
    }

    bair_ho;
}
