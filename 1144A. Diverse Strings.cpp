#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,pos,i,k;

	cin >> tc;

	for (pos=1; pos<=tc; pos++)
	{
		string str;
		map <int,int> mp;

		cin >> str;

		sort (str.begin(),str.end());

		k = true;

		for (i=1; str[i]; i++)
		{
			mp[str[i]]++;

			if ((mp[str[i]] >= 2) || (str[i]-str[i-1] != 1))
			{
				k = false;
				cout << "No";
				break;
			}
	  }

	  if (k)
	    cout << "Yes";

	   cout << endl;

	   mp.clear();
	   str.clear();
	}

	return 0;
}
