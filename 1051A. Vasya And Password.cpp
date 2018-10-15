/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe int main (void)
#define bair_ho return 0
#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

char str[105];

int main ()
{
    int tc,pos,i,a,b,c;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%s",str);

        a = b = c = 0;

        for (i=0; str[i]; i++)
        {
            if (isdigit(str[i]))
                ++c;
            else
            {
                if (isupper(str[i]))
                    ++a;
                else
                    ++b;
            }
        }

        if (a >= 1 && b >= 1 && c >= 1)
            pf ("%s\n",str);
        else
        {
            for (i=0; str[i]; i++)
            {
                if (isdigit(str[i]))
                {
                    if (c >= 2)
                    {
                        if (a == 0)
                        {
                            str[i] = 'A';
                            ++a;
                            --c;
                        }
                        else if (b == 0)
                        {
                            str[i] = 'a';
                            ++b;
                            --c;
                        }
                    }
                }
                else if (isupper(str[i]))
                {
                    if (a >= 2)
                    {
                        if (c == 0)
                        {
                            str[i] = '1';
                            ++c;
                            --a;
                        }
                        else if (b == 0)
                        {
                            str[i] = 'a';
                            ++b;
                            --a;
                        }
                    }
                }
                else if (islower(str[i]))
                {
                    if (b >= 2)
                    {
                        if (c == 0)
                        {
                            str[i] = '1';
                            ++c;
                            --b;
                        }
                        else if (a == 0)
                        {
                            str[i] = 'A';
                            ++a;
                            --b;
                        }
                    }
                }
            }

            pf ("%s\n",str);
        }
    }

    return 0;
}
