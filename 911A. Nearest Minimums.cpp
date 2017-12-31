/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
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
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int arr[100001],n,i,pos,mini,res,len;

    while (sf ("%d",&n) != EOF)
    {
        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        mini = arr[0];
        pos = 0;

        for (i=1; i<n; i++)
        {
            if (mini > arr[i])
            {
                mini = arr[i];
                pos = i;
            }
        }

        vector <int> v;

        v.pb(pos);

        for (i=pos+1; i<n; i++)
            if (mini == arr[i])
                v.pb(i);

        mini = 1e5;
        len = v.size();

        for (i=1; i<len; i++)
        {
            res = v[i]-v[i-1];

            if (mini > res)
                mini = res;
        }

        pf ("%d\n",mini);
    }

    return 0;
}
