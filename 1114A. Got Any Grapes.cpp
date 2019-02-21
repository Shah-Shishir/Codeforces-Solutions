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
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const lld m = 1073741824;
const int MAX = 10000507;
const double pi = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int x,y,z,a,b,c,k,s,m;

    while (cin >> x >> y >> z >> a >> b >> c)
    {
        k = 1;

        if (a < x)
        {
            cout << "NO" << endl;
            k = 0;
            return 0;
        }
        else
        {
            a -= x;

            if (a < 0)
                a = 0;

            if ((a+b) < y)
            {
                cout << "NO" << endl;
                k = 0;
                return 0;
            }
            else
            {
                m = min(a,y);
                a -= m;
                y -= m;
                b -= y;

                if (a < 0)
                    a = 0;

                if (b < 0)
                    b = 0;

                if ((a+b+c) < z)
                {
                    cout << "NO" << endl;
                    k = 0;
                    return 0;
                }
            }
        }

        cout << "YES" << endl;
    }

    bair_ho;
}
