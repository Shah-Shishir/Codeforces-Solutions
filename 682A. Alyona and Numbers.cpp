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
#define vi vector <int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

void fix (llu arr[],llu n)
{
    llu res = n / 5;

    for (int i=0; i<5; i++)
        arr[i] = res;

    res = n % 5;

    for (int i=1; i<=res; i++)
        ++arr[i];
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    llu m,n,a[5],b[5];

    while (sf ("%llu %llu",&m,&n) != EOF)
    {
        fix (a,m);
        fix (b,n);

        m = a[0]*b[0] + a[1]*b[4] + a[4]*b[1] + a[3]*b[2] + a[2]*b[3];

        pf ("%llu\n",m);
    }

    return 0;
}
