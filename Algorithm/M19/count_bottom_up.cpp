#include <bits/stdc++.h>
using namespace std;

int subset_sum(int n,int a[],int s) 
{
    if(n==0) 
    {
        if(s==0) return 1;
        else return 0;
    }
   if(a[n-1]<=s)
    { 
     int op1=subset_sum(n-1,a,s-a[n-1]);
     int op2=subset_sum(n-1,a,s);
     return op1 + op2;
    }

    else return subset_sum(n-1,a,s);

}

int main ()
{
      int n;
      cin>>n;
      int a[n];

      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int s;cin>>s;

      int dp[n+1][s+1];

      dp[0][0]=true;
      
      for(int i=1;i<=s;i++)
      {
        dp[0][i]=0;
      }

      for(int i=1;i<=n;i++)
      {
        for(int j=0;j<=s;j++)
        {
            if(a[i-1]<=j)
            {
                // bool op1=dp[i-1][j-a[i-1]];
                // bool op2=dp[i-1][j];
                // dp[i][j]=op1 || op2;
                dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];

            }
            else 
            {
                dp[i][j]=dp[i-1][j];
            }
        }
      }


    for(int i=0;i<=n;i++)
      {
        for(int j=0;j<=s;j++)
        {
            // if(dp[i][j])cout<<"T"<<" ";
            // else cout<<"F"<<" ";
            cout<<dp[i][j]<<" ";
            
        }
        cout<<endl;
      }

     

return 0;
}
