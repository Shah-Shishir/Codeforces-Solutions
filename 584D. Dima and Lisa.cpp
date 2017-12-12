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
const int MAX = 50000;

bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
          v.pb(i);
}

bool isPrime (int n)
{
    if (n < 2 || (!(n & 1) && n != 2))
        return false;

    if (n == 2)
        return true;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    sieve ();

    int n,i,a,b,c;

    while (sf ("%d",&n) != EOF)
    {
        if (n == 3)
            pf ("1\n3\n");
        else if (n == 4)
            pf ("2\n2 2\n");
        else if (n == 5)
            pf ("2\n2 3\n");
        else if (n & 1)
        {
            a = 3;
            n -= a;

            for (i=0; 2*v[i]<=n; i++)
            {
                b = v[i];
                c = n-v[i];

                if (isPrime(b) && isPrime(c))
                {
                    pf ("3\n%d %d %d\n",3,b,c);
                    break;
                }
            }
        }
        else
        {
            for (i=0; 2*v[i]<=n; i++)
            {
                a = v[i];
                b = n-v[i];

                if (isPrime(a) && isPrime(b))
                {
                    pf ("2\n%d %d\n",a,b);
                    break;
                }
            }
        }
    }

    return 0;
}
