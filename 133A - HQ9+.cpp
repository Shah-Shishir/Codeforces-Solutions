/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
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

int main ()
{
    string str;
    int len,i,k;

    while (getline (cin,str))
    {
        len = str.size();

        k = 0;

        for (i=0; i<len; i++)
        {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            {
                k = 1;
                break;
            }
        }

        if (k == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
