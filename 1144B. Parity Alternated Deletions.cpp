#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define pb push_back

int main() {
	int n,k,i,l1,l2,sum,x;

	while (cin >> n)
	{
		vi oV, eV;

		for (i=0; i<n; i++)
		{
			cin >> k;

			if (k & 1)
			  oV.pb(k);
			else
			  eV.pb(k);
		}

		sort (oV.begin(),oV.end());
		sort (eV.begin(),eV.end());

		l1 = eV.size();
		l2 = oV.size();

		if (l1 == l2 || abs(l1-l2) == 1)
			cout << 0;
		else
		{
			sum = 0;

			if (l1 > l2)
			{
				x = l1-l2-2;

				for (i=x; i>=0; i--)
				  sum += eV[i];
			}
			else
			{
				x = l2-l1-2;

				for (i=x; i>=0; i--)
				  sum += oV[i];
			}

			cout << sum;
		}

		cout << endl;

		eV.clear();
		oV.clear();
	}

	return 0;
}
