#include <bits/stdc++.h>
#define ll long long int  //macro defines
using namespace std;
// ll adj[20][20];
int main()
{
    ll n, e;                                         
    cin >> n >> e;
    n = n + 1;
    ll adj[n][n];
    
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout<< adj[i][j] <<" ";
                adj[i][j] = 1e18;
                if(i==j)
                    adj[i][j] = 0;
            }
            // cout << endl;
        }

    while(e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if(adj[a][b]!=1e18)
        {
            if(adj[a][b]<c) continue;
        }
        adj[a][b] = c;
    }

    // for (ll i = 0; i < n;i++)
    // {
    //     for (ll j = 0; j < n; j++)
    //     {
    //         cout << adj[i][j] << " ";

    //     }
    //     cout << endl;
    // }

        for (ll k = 0; k < n;k++)
        {
            for (ll i = 0; i<n; i++)

            {
                for (ll j = 0; j < n; j++)
                {
                    // cout << i << " " << k << " " << j << endl;
                    if(adj[i][k]+adj[k][j]<adj[i][j])
                    {
                        adj[i][j] = adj[i][k] + adj[k][j];
                    }
                }
            }
        }
       

         //for 2D array value prlling
        // for (ll i = 0; i < n; i++)
        // {
            
        //     for (ll j = 0; j < n; j++)
        //     {
        //         // cout<< adj[i][j] <<" ";
        //       if(adj[i][j]==1e18)
        //         {
        //             cout << "INF"<<" ";
        //         }
        //         else cout<< adj[i][j] <<" ";
        //     }
        //     cout << endl;
        // }

        ll q;
        cin >> q;
        while(q--)
        {
            ll a, b;
            cin >> a >> b;
            if(adj[a][b]==1e18)
                cout << -1 << endl;
           else    cout << adj[a][b] << endl;
        }

        return 0;
}
