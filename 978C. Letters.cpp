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

llu arr[200001];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    llu n,m,i,j,lb,room,a,b;

    while (sf ("%llu %llu",&n,&m) != EOF)
    {
        memset (arr,0,n);

        for (i=0; i<n; i++)
        {
            sf ("%llu",&a);

            if (i == 0)
                arr[i] = a;
            else
                arr[i] = arr[i-1]+a;
        }

        for (i=0; i<m; i++)
        {
            sf ("%llu",&b);

            lb = lower_bound(arr,arr+n,b)-arr;

            if (lb == 0)
                room = b;
            else
                room = b-arr[lb-1];

            pf ("%llu %llu\n",lb+1,room);
        }
    }

    return 0;
}
