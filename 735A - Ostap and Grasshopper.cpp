/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
//#include <string>
using namespace std;

int main ()
{
    int len,n,i,g,t,c1,c2,c3,c4;
    string str;

    while (cin >> len >> n)
    {
        cin >> str;

        c1 = 0, c2 = 0;

        for (i=0; i<len; i++)
        {
            if (str[i] == 'G')
            {
                g = i;
                c1 = 1;
            }
            else if (str[i] == 'T')
            {
                t = i;
                c2 = 1;
            }

            if (c1 == 1 && c2 == 1)
                break;
        }

        c3 = 1, c4 = 0;

        if (g > t)
        {
            for (i=t; i<=g; i+=n)
            {
                if (str[i] == '#')
                {
                    c4 = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (str[i] == 'G')
                {
                    c4 = 1;
                    cout << "YES" << endl;
                    break;
                }
                else if (str[i] != 'G')
                    c3 = 0;
            }

            if (c3 == 0 && c4 == 0)
                cout << "NO" << endl;
        }
        else
        {
            for (i=g; i<=t; i+=n)
            {
                if (str[i] == '#')
                {
                    c4 = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (str[i] == 'T')
                {
                    c4 = 1;
                    cout << "YES" << endl;
                    break;
                }
                else if (str[i] != 'T')
                    c3 = 0;
            }

            if (c3 == 0 && c4 == 0)
                cout << "NO" << endl;
        }
    }

    return 0;
}
