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

char str[105][105];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,m,i,j,c,val;

    while (sf ("%d %d",&n,&m) != EOF)
    {
        for (i=0; i<n; i++)
            sf ("%s",str[i]);

        bool k = true;

        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                if (isdigit(str[i][j]))
                {
                    c = 0;

                    if (i-1 >= 0 && j+1 <= m-1 && str[i-1][j+1] == '*')
                        ++c;
                    if (j+1 <= m-1 && str[i][j+1] == '*')
                        ++c;
                    if (i+1 <= n-1 && j+1 <= m-1 && str[i+1][j+1] == '*')
                        ++c;
                    if (i-1 >= 0 && str[i-1][j] == '*')
                        ++c;
                    if (i+1 <= n-1 && str[i+1][j] == '*')
                        ++c;
                    if (i-1 >= 0 && j-1 >= 0 && str[i-1][j-1] == '*')
                        ++c;
                    if (j-1 >= 0 && str[i][j-1] == '*')
                        ++c;
                    if (i+1 <= n-1 && j-1 >= 0 && str[i+1][j-1] == '*')
                        ++c;

                    val = str[i][j]-'0';

                    if (c != val)
                    {
                        k = false;
                        break;
                    }
                }
                else if (str[i][j] == '.')
                {
                    if (i-1 >= 0 && j+1 <= m-1 && str[i-1][j+1] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (j+1 <= m-1 && str[i][j+1] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (i+1 <= n-1 && j+1 <= m-1 && str[i+1][j+1] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (i-1 >= 0 && str[i-1][j] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (i+1 <= n-1 && str[i+1][j] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (i-1 >= 0 && j-1 >= 0 && str[i-1][j-1] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (j-1 >= 0 && str[i][j-1] == '*')
                    {
                        k = false;
                        break;
                    }
                    if (i+1 <= n-1 && j-1 >= 0 && str[i+1][j-1] == '*')
                    {
                        k = false;
                        break;
                    }
                }
            }

            if (!k)
            {
                pf ("NO");
                break;
            }
        }

        if (k)
            pf ("YES");

        pf ("\n");
    }

    return 0;
}
