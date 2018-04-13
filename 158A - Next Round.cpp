#include <iostream>
using namespace std;

int main ()
{
    int arr[50],n,k,i;

    while (cin >> n >> k)
    {
        int count = 0;

        for (i=0; i<n; i++)
            cin >> arr[i];

        for (i=0; i<n; i++)
            if (arr[i] >= arr[k-1] && arr[i] > 0)
                count++;

        cout << count << endl;
    }

    return 0;
}
