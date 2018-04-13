/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;

#define sf scanf
#define pf printf

int main (void)
{
    string str;
    int len,i,A,B,C,D,E,F;

    while (cin >> str)
    {
        int b1=0,u=0,l=0,b2=0,a=0,s=0,r=0;

        len = str.size();

        if (len < 9)
            cout << 0 << endl;
        else
        {
            for (i=0; i<len; i++)
            {
               if (str[i] == 'B')
                    b1++;
               else if (str[i] == 'u')
                    u++;
               else if (str[i] == 'l')
                    l++;
                else if (str[i] == 'b')
                    b2++;
               else if (str[i] == 's')
                    s++;
                else if (str[i] == 'a')
                    a++;
               else if (str[i] == 'r')
                    r++;
            }

            a = a/2;
            u = u/2;

            A = min (b1,u);
            B = min (A,l);
            C = min (B,b2);
            D = min (C,a);
            E = min (D,s);
            F = min (E,r);

            cout << F << endl;
        }
    }

    return 0;
}
