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
    string str;
    int len,i,val,siz;

    while (cin >> str)
    {
        len = str.length();

        vector <int> v;

        for (i=0; i<len; i++)
        {
            if (str[i] == '+')
                continue;

            val = str[i]-'0';
            v.pb(val);
        }

        sort (v.begin(),v.end());

        siz = v.size();

        for (i=0; i<siz; i++)
        {
            if (i == siz-1)
                cout << v[i] << endl;
            else
                cout << v[i] << "+";
        }
    }

    return 0;
}
