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

bool isPal (char str[])
{
    int len = strlen(str);
    int h = len/2,i;
    len--;

    for (i=0; i<h; i++)
        if (str[i] != str[len-i])
            return false;

    return true;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    fast;
    */
    char str[12];
    int len,h,i,j,k,pos;
    char ch;

    while (sf ("%s",str) != EOF)
    {
        len = strlen(str);
        h = len/2;

        if (isPal (str))
        {
            for (i=0; i<=h-1; i++)
                pf ("%c",str[i]);

            pf ("%c",str[h]);

            for (i=h; i<len; i++)
                pf ("%c",str[i]);

            pf ("\n");
        }
        else
        {
            i=0, j=len-1, k=pos=0;

            while (i <= j)
            {
                cout << i << " " << str[i] << " " << j << " " << str[j] << endl;

                if (k > 1)
                {
                    pf ("NA\n");
                    break;
                }

                if (str[i] != str[j])
                {
                    ++k;
                    pos = j;
                    ch = str[i];
                }
                else
                    --j;

                ++i;

            }

            if (k == 1)
            {
                for (i=0; i<=pos; i++)
                    pf ("%c",str[i]);

                pf ("%c",ch);

                for (i=pos+1; i<len; i++)
                    pf ("%c",str[i]);

                pf ("\n");
            }
        }
    }

    return 0;
}
