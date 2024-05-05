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
      
      if(s%2==0)
      {
        int sum=s/2;
        bool dp[n+1][sum+1]; // jehetu amra full size e use korbo mane 7 size hole 7 ta size e use korbo..tai size ek baray nite hoi karon 8 size nilei 7 porjonto use kora jabe..cz amra jani array er last index hoi size-1
       
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
        if(dp[n][sum]) cout<<"YES"<<endl;  // total sum er half banano jay ki na check korbo jodi jay then oitar subset sum ver krbo ,, then dektei pbo je oi subset sum tabuler form e last value dp[n][sum] ei total cell sobgula value die size er half koto vbe banano jay .. minimum 2 vabe banano jabei na hoy to 2 bage vag kora jbe na
        else cout<<"NO"<<endl;;
         
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=sum;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //         // if(dp[i][j]==true) 
        //     }
        //     cout<<endl;
        // }

        

      }
      else
      {
        cout<<"No";
      }

    

return 0;
}
