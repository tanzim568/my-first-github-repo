#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    vector<pair<int,int>> v[n];
    memset(mat, -1, sizeof(mat));
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
             if(i==j) mat[i][j] = 0;
        }
    }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a, b,c;
                cin >> a >> b >>c;
                mat[a][b] = c;
                mat[b][a] = c;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(mat[i][j]>0)
                {
                    v[i].push_back({j,mat[i][j]});

                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for(pair<int,int> val:v[i])
            {
                cout << i<<" -> "<<val.first<<" "<<val.second << endl;
            }

        }

            return 0;
}
