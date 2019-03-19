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
const int MAX = 50005;
const double pi = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int arr[50005];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,sum,ans,x,mini;

    while (sf ("%d",&n) != EOF)
    {
        sum = 0;
        mini = 105;

        for (i=0; i<n; i++)
        {
            sf ("%d",&arr[i]);
            mini = min (mini,arr[i]);
            sum += arr[i];
        }

        ans = sum;

        for (i=0; i<n; i++)
        {
            for (j=2; j<=arr[i]; j++)
            {
                if (arr[i] % j == 0 && arr[i] != mini)
                {
                    x = sum-arr[i]-mini+arr[i]/j+mini*j;
                    ans = min (x,ans);
                }
            }
        }

        pf ("%d\n",ans);
    }

    bair_ho;
}
