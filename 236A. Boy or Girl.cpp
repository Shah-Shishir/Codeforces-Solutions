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

int main (void)
{
    string str;
    int len,i;

    while (cin >> str)
    {
        len = str.length();

        set <char> myset;

        for (i=0; i<len; i++)
            myset.in(str[i]);

        if (myset.size() & 1)
            cout << "IGNORE HIM!\n";
        else
            cout << "CHAT WITH HER!\n";
    }

    return 0;
}
