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
#define u unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int n,x,y,val;

    while (cin >> n)
    {
        set <int> myset;

        cin >> x;

        while (x--)
        {
            cin >> val;
            myset.in(val);
        }

        cin >> y;

        while (y--)
        {
            cin >> val;
            myset.in(val);
        }

        if (n == myset.size())
            cout << "I become the guy.\n";
        else
            cout << "Oh, my keyboard!\n";
    }

    return 0;
}
