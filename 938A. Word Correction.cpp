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

bool isVowel (char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        return true;

    return false;
}

bool isCorrect (string str)
{
    int n=str.size(),i;

    for (i=0; i<n-1; i++)
        if (isVowel(str[i]) && isVowel(str[i+1]))
            return false;

    return true;
}

void makeCorrect (string str)
{
    int n=str.size(),i,x=0;
    string a;
    bool k=false;

    for (i=0; i<n; i++)
    {
        if (isVowel(str[i]) && isVowel(str[i+1]))
        {
            a.pb(str[i]);
            x = i+2;
            k = true;
            break;
        }
        else
            a.pb(str[i]);
    }

    if (k)
    {
        for (i=x; i<n; i++)
            a.pb(str[i]);
    }

    if (!isCorrect (a))
        makeCorrect (a);
    else
        cout << a << endl;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    string str;
    int n;

    while (cin >> n >> str)
        makeCorrect (str);

    return 0;
}
