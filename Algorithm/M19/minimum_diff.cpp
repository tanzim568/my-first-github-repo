#include <bits/stdc++.h>
using namespace std;

int main ()
{
      int n;
      cin>>n;
      int a[n],s=0;
      for(int i=0;i<n;i++) 
      {
        cin>>a[i];
        s+=a[i];
      }

      bool dp[n+1][s+1];
      dp[0][0]=true;

      for(int i=1;i<=n;i++)
      {
        dp[0][i]=false;
      }
      




return 0;
}
