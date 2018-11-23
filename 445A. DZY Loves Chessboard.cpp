/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

char str[105][105];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,m,i,j;

    while (sf ("%d %d",&n,&m) != EOF)
    {
        for (i=0; i<n; i++)
            for (j=0; j<m; j++)
                cin >> str[i][j];

        for (i=0; i<n; i++)
        {
            if (i & 1)
            {
                for (j=0; j<m; j++)
                {
                    if (str[i][j] == '-')
                        continue;

                    if (j & 1)
                        str[i][j] = 'B';
                    else
                        str[i][j] = 'W';
                }
            }
            else
            {
                for (j=0; j<m; j++)
                {
                    if (str[i][j] == '-')
                        continue;

                    if (j & 1)
                        str[i][j] = 'W';
                    else
                        str[i][j] = 'B';
                }
            }
        }

        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                pf ("%c",str[i][j]);

                if (j == m-1)
                    pf ("\n");
            }
        }
    }

    bair_ho;
}
