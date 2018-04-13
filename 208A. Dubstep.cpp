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
    string str,s;
    int len,i;

    while (getline(cin,str))
    {
        len = str.length();

        s = "";
        vector <string> v;

        for (i=0; i<len; i++)
        {
            if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
            {
                if (s != "")
                    v.pb(s);

                i+=2;
                s.clear();
            }
            else
                s.pb(str[i]);
        }

        if (s != "")
            v.pb(s);

        len = v.size();

        for (i=0; i<len; i++)
        {
            cout << v[i];

            if (i == len-1)
                cout << endl;
            else
                cout << " ";
        }
    }

    return 0;
}
