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

char str[105];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int len,i;
    bool a,b,c,k;

    while (sf ("%s",str) != EOF)
    {
        len = strlen(str);
        k = true;

        for (i=0; i<len; i++)
        {
            a = (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'e');
            b = (str[i+1] == 'a' || str[i+1] == 'o' || str[i+1] == 'u' || str[i+1] == 'i' || str[i+1] == 'e');
            c = (str[i-1] == 'a' || str[i-1] == 'o' || str[i-1] == 'u' || str[i-1] == 'i' || str[i-1] == 'e');

            if (i == len-1)
            {
                if (str[i] == 'n' || (c && a))
                    continue;

                if (!(!c && a))
                {
                    k = false;
                    break;
                }
            }
            else
            {
                if (str[i] == 'n')
                    continue;

                if (!a && !b)
                {
                    k = false;
                    break;
                }
            }
        }

        if (k)
            pf ("YES\n");
        else
            pf ("NO\n");
    }

    return 0;
}
