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
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int arr[100005];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,p,q,k;

    while (sf ("%d",&n) != EOF)
    {
        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        k = 0;
        p = q = -1;

        for (i=0; i<n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                k++;

                if (k == 1)
                    p = i;
            }
            else if (arr[i] < arr[i+1])
            {
                if (k > 0)
                {
                    q = i;
                    break;
                }
            }
        }

        if (k > 0 && q == -1)
            q = n-1;

        if (p == q && p == -1)
            p = q = 0;
        else if (q == -1)
            reverse (arr+p,arr+p+1);
        else
            reverse (arr+p,arr+q+1);

        k = 1;

        for (i=0; i<n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                k = 0;
                pf ("no\n");
                break;
            }
        }

        if (k)
            pf ("yes\n%d %d\n",++p,++q);
    }

    bair_ho;
}
