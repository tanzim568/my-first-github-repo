#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int X = ceil(N / 2.0);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == X && j == X)
            {
                cout << "X";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (i + j == N + 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}