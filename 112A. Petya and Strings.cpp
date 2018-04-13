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
    string a,b;
    int len,i;

    while (cin >> a >> b)
    {
        len = a.length();

        for (i=0; i<len; i++)
            if (isupper(a[i]))
                a[i] = tolower(a[i]);

        for (i=0; i<len; i++)
            if (isupper(b[i]))
                b[i] = tolower(b[i]);

        if (a == b)
            cout << 0 << endl;
        else if (a < b)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}
