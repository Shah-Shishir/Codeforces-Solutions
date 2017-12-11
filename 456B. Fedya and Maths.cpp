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

int power (int n,int p)
{
    string bin;

    while (p)
    {
        if (p & 1)
            bin += "1";
        else
            bin += "0";

        p >>= 1;
    }

    reverse (bin.begin(),bin.end());

    int res=1,len=bin.size(),i;

    for (i=0; i<len; i++)
    {
        res *= res;

         if (bin[i] == '1')
            res *= n;
    }

    return res;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    char str[100001];
    int len,val,i;

    while (sf ("%s",str) != EOF)
    {
        len = strlen(str);

        if (len == 1)
        {
            val = str[len-1]-'0';
            val &= 3;
            val = 1 + power(2,val) + power(3,val) + power(4,val);
            val %= 5;
            pf ("%d\n",val);
        }
        else
        {
            val = 10 * (str[len-2]-'0') + (str[len-1]-'0');
            val &= 3;
            val = 1 + power(2,val) + power(3,val) + power(4,val);
            val %= 5;
            pf ("%d\n",val);
        }
    }

    return 0;
}
