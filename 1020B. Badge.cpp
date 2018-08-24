#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

const int MAX = 1005;
vector <int> edges[MAX];
bool visited[MAX];
int n;

int BFS (int s)
{
    int i,j,u,v;

    queue <int> Q;
    memset (visited,0,sizeof visited);
    Q.push(s);
    visited[s] = 1;

    while (!Q.empty())
    {
        u = Q.front();
        Q.pop();

        for (i=0; i<edges[u].size(); i++)
        {
            v = edges[u][i];

            if (!visited[v])
            {
                visited[v] = 1;
                Q.push(v);
            }
        }
    }

    return v;
}

int main ()
{
    int i,p;

    while (sf ("%d",&n) != EOF)
    {
        for (i=1; i<=n; i++)
        {
            sf ("%d",&p);

            edges[i].pb(p);
        }

        for (i=1; i<=n; i++)
        {
            pf ("%d",BFS(i));

            if (i == n)
                pf ("\n");
            else
                pf (" ");
        }
    }

    return 0;
}
