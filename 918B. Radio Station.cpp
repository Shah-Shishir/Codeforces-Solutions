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

    int n,m,i;
    char name[12],ip1[20],com[12];
    string ip2;

    while (sf ("%d %d",&n,&m) != EOF)
    {
        vector <string> C,IP;
        map <string,string> mp;

        for (i=1; i<=n; i++)
        {
            sf ("%s %s",name,ip1);
            mp[ip1] = name;
        }

        for (i=1; i<=m; i++)
        {
            sf ("%s ",com);
            cin >> ip2;

            C.pb(com);
            ip2.pop_back();
            IP.pb(ip2);
        }

        for (i=0; i<m; i++)
            pf ("%s %s; #%s\n",C[i].c_str(),IP[i].c_str(),mp[IP[i]].c_str());

        C.clear();
        IP.clear();
        mp.clear();
        ip2.clear();
    }

    return 0;
}
