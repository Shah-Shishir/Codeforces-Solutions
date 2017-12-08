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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    char str[12];
    int len,i;

    while (sf ("%s",str) != EOF)
    {
        if (isdigit(str[0]))
            pf ("%s\n",str);
        else
        {
            len = strlen(str);
            string s;

            if (str[len-1] >= str[len-2])
            {
                for (i=0; i<len-1; i++)
                    s.pb(str[i]);
            }
            else
            {
                for (i=0; i<len-2; i++)
                    s.pb(str[i]);

                s.pb(str[len-1]);
            }

            if (s == "-0")
                s = "0";

            pf ("%s\n",s.c_str());
        }
    }

    return 0;
}
