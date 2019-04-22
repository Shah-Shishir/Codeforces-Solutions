#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define pb push_back
#define mii map <int,int>

int arr[200005];

int main() {
	int n,k,i,l1,l2;

	while (cin >> n)
	{
	    vi inc,dec;
		mii mp;
		k = 1;

		for (i=0; i<n; i++)
		{
			cin >> arr[i];
			mp [arr[i]]++;

			if (mp[arr[i]] >= 3)
			  k = 0;
		}

		if (!k)
		  cout << "NO" << endl;
		else
		{
			for (i=n-1; i>=0; i--)
			{
				if (mp[arr[i]] == 2)
				{
					inc.pb(arr[i]);
					dec.pb(arr[i]);
					mp[arr[i]] = 0;
				}
				else if (mp[arr[i]] == 1)
				  inc.pb(arr[i]);
			}

			sort (inc.begin(),inc.end());
			sort (dec.begin(),dec.end());
			reverse (dec.begin(),dec.end());

            l1 = inc.size();
            l2 = dec.size();

            cout << "YES" << endl;

            cout << l1 << endl;

            for (i=0; i<l1; i++)
            {
                cout << inc[i];

                if (i == l1-1)
                  cout << endl;
                else
                  cout << " ";
            }

            cout << l2 << endl;

            for (i=0; i<l2; i++)
            {
                cout << dec[i];

                if (i == l2-1)
                  cout << endl;
                else
                  cout << " ";
            }
        }

        inc.clear();
        dec.clear();
	}

	return 0;
}
