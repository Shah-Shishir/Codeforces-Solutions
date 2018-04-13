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

int arr[3005];

int main (void)
{
    int n,t,i,j,count=0,num;

    for (n=6; n<=3000; n++)
    {
        vector <int> v;
        t = n;

        if (!(t & 1))
        {
            v.pb(2);

            while (!(t & 1))
                t >>= 1;
        }

        for (i=3; i*i<=n; i+=2)
        {
            if (t % i == 0)
            {
                v.pb(i);

                while (t % i == 0)
                    t /= i;
            }
        }

        if (t > 1)
            v.pb(t);

        if (v.size() == 2)
            count++;

        arr[n] = count;
    }

    while (cin >> n)
        cout << arr[n] << endl;

    return 0;
}
