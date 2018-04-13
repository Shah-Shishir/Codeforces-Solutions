#include <iostream>
using namespace std;

int arr[100000];

int main ()
{
    int n,i,count;

    while (cin >> n)
    {
        count = 1;

        for (i=0; i<n; i++)
            cin >> arr[i];

        for (i=1; i<n; i++)
            if (arr[i] != arr[i-1])
                count = count + 1;

        cout << count << endl;
    }

    return 0;
}
