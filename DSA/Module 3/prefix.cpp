#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n, q;
    cin >> n >> q;

    int  v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long int pre[n];  // pre is an data structure array pre defined to terminate TLE errors in compiler it takes complexity O(n).
     pre[0]=v[0]; // index  -1 hoy na module 3.3 details e bola ache
    
    for (int i=1;i<n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }

    // for (int i=0;i<n;i++)
    // {
    //     cout<<pre[i]<<" ";
    // }


    while (q--)
    {
        long long int L, R;
        cin >> L >> R;

        long long sum;
        L--;
        R--;

        if (L==0) sum=pre[R];
        else sum=pre[R]-pre[L-1];
         cout << sum << endl;
    }

    return 0;
}
