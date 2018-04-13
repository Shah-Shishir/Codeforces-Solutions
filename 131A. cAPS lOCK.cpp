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
    string str;
    int len,i,u;
    bool b;

    while (cin >> str)
    {
        len = str.size();
        b = false;
        u = 0;

        for (i=0; i<len; i++)
            if (isupper(str[i]))
                u++;

        if (len == u || (islower(str[0]) && len-u == 1))
            b = true;

        if (b)
        {
            for (i=0; i<len; i++)
            {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
                else
                    str[i] = toupper(str[i]);
            }

            cout << str << endl;
        }
        else
            cout << str << endl;
    }

    return 0;
}
