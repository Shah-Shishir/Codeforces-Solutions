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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

int main (void)
{
    int i,j,W=0,B=0;
    char str[8][8];

    for (i=0; i<8; i++)
        cin >> str[i];

    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            if (islower(str[i][j]))
            {
                if (str[i][j] == 'q')
                    B += 9;
                else if (str[i][j] == 'r')
                    B += 5;
                else if (str[i][j] == 'b' || str[i][j] == 'n')
                    B += 3;
                else if (str[i][j] == 'p')
                    B += 1;
            }
            else
            {
                if (str[i][j] == 'Q')
                    W += 9;
                else if (str[i][j] == 'R')
                    W += 5;
                else if (str[i][j] == 'B' || str[i][j] == 'N')
                    W += 3;
                else if (str[i][j] == 'P')
                    W += 1;
            }
        }
    }

    if (W > B)
        cout << "White\n";
    else if (W < B)
        cout << "Black\n";
    else
        cout << "Draw\n";

    return 0;
}
