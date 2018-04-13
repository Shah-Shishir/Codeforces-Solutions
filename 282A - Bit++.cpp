/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n,pos,val,i;
    string str;

    while (cin >> n)
    {
        val = 0;

        for (pos=1; pos<=n; pos++)
        {
            cin >> str;

            if (str[2] == 'X')
            {
                if (str[0] == '+')
                    ++val;
                else
                    --val;
            }
            else if (str[0] == 'X')
            {
                if (str[1] == '+')
                    val++;
                else
                    val--;
            }
        }

        cout << val << endl;
    }

    return 0;
}
