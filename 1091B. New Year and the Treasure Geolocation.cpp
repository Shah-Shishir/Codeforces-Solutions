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

    int N,i,j,a,b,x,y,l,m,n,maxi;

    while (sf ("%d",&N) != EOF)
    {
        vector <pii> ob(N+1),cl(N+1);
        map <pii,int> mp;

        for (i=1; i<=N; i++)
            sf ("%d %d",&ob[i].first,&ob[i].second);

        for (i=1; i<=N; i++)
            sf ("%d %d",&cl[i].first,&cl[i].second);

        for (i=1; i<=N; i++)
        {
            a = ob[i].first;
            b = ob[i].second;

            for (j=1; j<=N; j++)
            {
                x = cl[j].first;
                y = cl[j].second;

                pii p = make_pair(a+x,b+y);
                mp[p]++;
            }
        }

        m = n = maxi = 0;
        map <pii,int> :: iterator it;

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            if (it->second > maxi)
            {
                maxi = it->second;
                m = (it->first).first;
                n = (it->first).second;
            }
        }

        pf ("%d %d\n",m,n);

        ob.clear();
        cl.clear();
        mp.clear();
    }

    bair_ho;
}
