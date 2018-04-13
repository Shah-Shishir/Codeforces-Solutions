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
    int n,i,j;
    char str[305][305],ch,d;
    bool x,y,z;

    while (cin >> n)
    {
        x = true;

        for (i=0; i<n; i++)
            cin >> str[i];

        ch = str[0][0];
        d = str[0][1];

        for (i=1; i<n; i++)
        {
            if (str[i][i] != ch)
            {
                x = false;
                break;
            }
        }

        j = n-1;
        y = true;

        for (i=0; i<n; i++)
        {
            if (str[i][j--] != ch)
            {
                y = false;
                break;
            }
        }

        z = true;

        for (i=0; i<n; i++)
        {
            if (z == false)
                break;

            for (j=0; j<n; j++)
            {
                if (i == j || i+j == n-1)
                    continue;
                else
                {
                    if (!(str[i][j] == d && str[i][j] != ch))
                    {
                        z = false;
                        break;
                    }
                }
            }
        }

        if (x && y && z)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
