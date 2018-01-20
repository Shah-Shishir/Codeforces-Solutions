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

bool doesContain7 (int n)
{
    while (n)
    {
        if (n % 10 == 7)
            return true;

        n /= 10;
    }

    return false;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int x,a,b;

    while (sf ("%d\n%d %d",&x,&a,&b) != EOF)
    {
        if (doesContain7(a) || doesContain7(b))
            pf ("0\n");
        else
        {
            int k = 0;

            while (1)
            {
                if ((b-x) == 0)
                    b = 60;
                else if ((b-x) < 0)
                {
                    b = 60-(x-b);
                    --a;
                }
                else
                    b -= x;

                ++k;

                if (a < 0)
                  a = 24+a;

                if (doesContain7(a) || doesContain7(b))
                    break;

                if (b == 60)
                    --a;
            }

            pf ("%d\n",k);
        }
    }

    return 0;
}
