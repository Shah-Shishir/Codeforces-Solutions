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

int main (void)
{
    int n,i,x,j,a,b,c,check;

    while (cin >> n)
    {
        vector <int> v;

        for (i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        sort (v.begin(),v.end());

        check = 0;

        for (j=0; j<n-2; j++)
        {
            a = v[j];
            b = v[j+1];
            c = v[j+2];

            if (a+b > c && b+c > a && c+a > b)
            {
                check = 1;
                cout << "YES" << endl;
                break;
            }
        }

        if (check == 0)
            cout << "NO" << endl;
    }

    return 0;
}
