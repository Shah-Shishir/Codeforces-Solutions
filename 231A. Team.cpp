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
    int n,arr[3],i,ans,c;

    while (cin >> n)
    {
        ans = 0;

        while (n--)
        {
            c = 0;

            for (i=0; i<3; i++)
            {
                cin >> arr[i];

                if (arr[i] == 1)
                    c++;
            }

            if (c > 1)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
