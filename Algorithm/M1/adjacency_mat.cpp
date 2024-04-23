#include <bits/stdc++.h>
using namespace std;

int main()
{
    //input  first e node sonkha dibe ba size dibe sekhane 0-(n-1) input nibe ar erpor edge sonkha dibe as an input
    // jehetu undirected graph 0 node to 1 node or 1 to 0 same kotha
    //node value jehetu 6 that 0 to 5 porjonto value guloi thakbe input hisebe orthat 0,1,...5 rows and coloumns needed to put edge values
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

        // adjacency matrix janay kon kon edge e connection ache 

        // ekhane edge e er value future e kno kaje asbe na tai e ke direct while (e--) kore o kaj kora jay ba for loop use kora jay.. jdi kaje lage future then obossoi for loop i er value diey kaj krte hbe e komano jabe na while loop diye

        while (e--)
        {
            int a, b;
            cin >> a >> b;
            mat[a][b]=1;
            // mat[b][a]=1;  directed graph e amra eta use kori(1 tai use kori (x,y)) na cause directed graph e question e diye direction ora dieyei dibe 0 1 hole shudu 0 1 cell ei 1 thkbe 1 0 te 1 dibo na, but undirected graph jehetu dui dikei move kore so 2 ta x,y and y,x connection deyai lagbe

            // node sonkha 6 mane 0-5 access kortei hobe ,, cause ekhane total 6 ta value{0,1,2,3,4,5,6}
            // tai 0-(n-1) porjonto

        }

        for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cout << mat[i][j]<<" ";
        }

        cout << endl;
    }

    if(mat[0][5]/*true false hisebeo likha jay abar ==1 evabeo*/==1)
        cout << "Connected" << endl;
    else
        cout << "NO";
    return 0;
}
