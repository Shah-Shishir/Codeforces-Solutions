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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int

int main (void)
{
    int a,b,c,u,v,w,x,y,z,res;

    while (cin >> a >> b >> c)
    {
        u = a+b*c;
        v = a*b+c;
        w = a+b+c;
        x = a*(b+c);
        y = a*b*c;
        z = (a+b)*c;

        res = max((max (u,v)),w);
        res = max((max((max(res,x)),y)),z);

        cout << res << endl;
    }

    return 0;
}
