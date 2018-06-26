#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

int n,arr[100005];
vector <int> v(100005);

int binarySearch (int k)
{
    int i,low=1,high=n,mid;

    while (low < high)
    {
        mid = (low+high)/2;

        if (k <= v[mid])
            high = mid;
        else
            low = mid+1;
    }

    return high;
}

/*** THIS FUNCTION ALSO WORKS!!! :D

int binarySearch (int k)
{
    int i,low=1,high=n,mid;

    while (low <= high)
    {
        mid = (low+high)/2;

        if (v[mid] == k || (k > v[mid-1] && k < v[mid]))
            return mid;
        else if (k > v[mid] && k < v[mid+1])
            return mid+1;
        else if (k > v[mid])
            low = mid+1;
        else
            high = mid-1;
    }
}

***/

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int i,m,k;

    while (sf ("%d",&n) != EOF)
    {
        for (i=1; i<=n; i++)
        {
            sf ("%d",&arr[i]);
            v[i] = v[i-1] + arr[i];
        }

        sf ("%d",&m);

        for (i=1; i<=m; i++)
        {
            sf ("%d",&k);
            pf ("%d\n",binarySearch(k));
        }
    }

    return 0;
}
