/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_jombe_besh   int main (void)
#define jitsen_bhai		        return 0
#define sf                  	scanf
#define pf                  	printf
#define ssf                 	sscanf
#define spf                 	sprintf
#define fsf                 	fscanf
#define fpf                 	fprintf
#define fast                	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               	sf ("%d",&tc)
#define sn                  	sf ("%d",&n)
#define whilecase           	while (tc--)
#define eof                 	while (cin >> n)
#define forloop             	for (pos=1; pos<=tc; pos++)
#define arrayloop           	for (i=0; i<n; i++)
#define cinstr              	cin >> str
#define getstr              	getline (cin,str)
#define pcase               	pf ("Case %d: ",pos)
#define vi                  	vector <int>
#define si                  	set <int>
#define vs                  	vector <string>
#define pii                 	pair <int,int>
#define mii                 	map <int,int>
#define pb                  	push_back
#define in                  	insert
#define llu                 	unsigned long long
#define lld                 	long long
#define U                   	unsigned int
#define endl                	"\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

ebar_khela_jombe_besh
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,k,ans,a,b,x,y;

    while (sf ("%d",&n) != EOF)
    {
        ans = a = b = x = y = 0;

        for (i=0; i<n; i++)
        {
            sf ("%d",&k);

            if (k == 1)
            {
                if (x == 0)
                {
                    a = 0;
                    x = 1;
                }

                ++a;
                x = 1;
                y = 0;
            }
            else
            {
                if (y == 0)
                {
                    b = 0;
                    y = 1;
                }

                y = 1;
                x = 0;
                ++b;
            }

            ans = max (ans, min (a,b));
        }

        pf ("%d\n",ans*2);
    }

    jitsen_bhai;
}
