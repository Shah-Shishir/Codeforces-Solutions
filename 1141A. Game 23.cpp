/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_jombe_besh   int main (void)
#define jitsen_bhai		return 0
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

    int n,m,d;

    while (sf ("%d %d",&n,&m) != EOF)
    {
        if (m % n != 0)
            pf ("-1");
        else
        {
            d = m/n;

            int k = 1,p = 0;

            while (d)
            {
                if (d == 1)
                    break;

                if (d % 2 == 0)
                {
                    d /= 2;
                    ++p;
                }
                else if (d % 3 == 0)
                {
                    d /= 3;
                    ++p;
                }
                else
                {
                    k = 0;
                    pf ("-1");
                    break;
                }
            }

            if (k)
                pf ("%d",p);
        }

        pf ("\n");
    }

    jitsen_bhai;
}
