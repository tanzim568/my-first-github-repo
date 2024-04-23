#include <bits/stdc++.h>
#define ll long long int  //macro defines
using namespace std;
// int adj[20][20];
int main()
{
    int n, e;
    cin >> n >> e;
    ll adj[n][n];
    
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout<< adj[i][j] <<" ";
                adj[i][j] = INT_MAX;
                if(i==j)
                    adj[i][j] = 0;
            }
            // cout << endl;
        }

    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a][b] = c;
    }

    for (int k = 0; k < n;k++)
    {
        for (int i = 0; i<n; i++)

        {
            for (int j = 0; j < n; j++)
            {
                // cout << i << " " << k << " " << j << endl;
                if(adj[i][k]+adj[k][j]<adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    bool ans = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            // cout<< adj[i][j] <<" ";
            if (i == j && adj[i][j] < 0)
            {
                ans = true;
                break;
            }
            if (adj[i][j] == INT_MAX)
            {
                cout << "INF"
                     << " ";
            }
            else
                cout << adj[i][j] << " ";
        }
        if(ans)
           { cout << "cycle found";
            break;}
        cout << endl;
        }

    return 0;
}
