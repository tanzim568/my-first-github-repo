#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005],sum=0;

 // subset holo main set er ekta subset but subsequence,subarray egula alada jinis... main set er ekta combination 
 //self made hand note: 
 /* jekhono ekta subset er sum nile total set er sum milate  ar joto dorkar oita onno subset generate kore rakhbe so jdi equally divide kora jay then ekta half hole arekta half e pawa jabe*/



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
      
      if(s%2==0)
      {
         sum=s/2;
        int dp[n+1][sum+1]; // jehetu amra full size e use korbo mane 7 size hole 7 ta size e use korbo..tai size ek baray nite hoi karon 8 size nilei 7 porjonto use kora jabe..cz amra jani array er last index hoi size-1
       
        dp[0][0]=true;
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];


                }
                else 
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[n][sum]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;;
         
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                cout<<dp[i][j]<<" ";
                // if(dp[i][j]==true) 
            }
            cout<<endl;
        }

        

      }
      else
      {
        cout<<"No";

         for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                cout<<dp[i][j]<<" ";
                // if(dp[i][j]==true) 
            }
            cout<<endl;
        }
      }

    

return 0;
}
