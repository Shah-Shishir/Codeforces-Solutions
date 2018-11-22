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
#define vs                  vector <string>
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

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,ans,a,b,c,d,k1,k2,k3,k4;

    while (sf ("%d",&n) != EOF)
    {
        vector <pii> v(n);

        ans = 0;

        for (i=0; i<n; i++)
            sf ("%d %d",&v[i].first,&v[i].second);

        for (i=0; i<n; i++)
        {
            k1 = k2 = k3 = k4 = 0;
            a = v[i].first;
            b = v[i].second;

            for (j=0; j<n; j++)
            {
                c = v[j].first;
                d = v[j].second;

                if (a == c)
                {
                    if (b > d)
                        k1 = 1;
                    else if (b < d)
                        k2 = 1;
                }

                if (b == d)
                {
                    if (a > c)
                        k3 = 1;
                    else if (a < c)
                        k4 = 1;
                }

                if (k1 == 1 && k1 == k2 && k1 == k3 && k1 == k4)
                {
                    ++ans;
                    break;
                }
            }
        }

        pf ("%d\n",ans);

        v.clear();
    }

    bair_ho;
}
