#include <iostream>
using namespace std;

int main ()
{
    int arr[15][15],n,i,j;

    while (cin >> n)
    {
        for (j=1; j<=n; j++)
            arr[1][j] = 1;

        for (i=1; i<=n; i++)
            arr[i][1] = 1;

        for (i=2; i<=n; i++)
            for (j=2; j<=n; j++)
                arr[i][j] = arr[i-1][j] + arr[i][j-1];

        cout << arr[n][n] << endl;
    }

    return 0;
}