/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

char str[55];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int len,i,pos;

    while (sf ("%s",str) != EOF)
    {
        len = strlen(str);
        string ans;

        if (str[0] == 'h')
            ans = "http://";
        else
            ans = "ftp://";

        if (str[len-2] == 'r' && str[len-1] == 'u')
        {
            if (str[0] == 'h')
            {
                for (i=4; i<len-2; i++)
                    ans.pb(str[i]);
            }
            else
            {
                for (i=3; i<len-2; i++)
                    ans.pb(str[i]);
            }

            ans += ".ru";
        }
        else
        {
            pos = 0;

            if (str[0] == 'h')
            {
                for (i=4; i<len-1; i++)
                {
                    if (str[i] == 'r' && str[i+1] == 'u')
                    {
                        ans += ".ru/";
                        pos = i+2;
                        break;
                    }
                    else
                        ans.pb(str[i]);
                }

                for (i=pos; i<len; i++)
                    ans.pb(str[i]);
            }
            else
            {
                bool k = false;

                for (i=3; i<len-1; i++)
                {
                    if (str[i] == 'r' && str[i+1] == 'u' && k)
                    {
                        ans += ".ru/";
                        pos = i+2;
                        break;
                    }
                    else
                    {
                        k = true;
                        ans.pb(str[i]);
                    }
                }

                for (i=pos; i<len; i++)
                    ans.pb(str[i]);
            }
        }

        pf ("%s\n",ans.c_str());
    }

    return 0;
}
