#include <bits/stdc++.h>
using namespace std;
const int N=1000;
int dp[N][N];

int knapsack(int n,int weight[],int value[],int W)
{
    if(n==0 || W==0) return 0;

    if(dp[n][W] != -1)
    {
        return dp[n][W];
    }
 
    if(weight[n-1]<= W)
    {
         int op1=knapsack(n-1,weight,value,W-weight[n-1])+value[n-1];
         int op2=knapsack(n-1,weight,value,W);

         return dp[n][W]=max(op1,op2);	    
    }

    else 
       {  

        int op2=knapsack(n-1,weight,value,W);
         return dp[n][W] = op2;
        
        }

}

int main ()
{
    int n,w;
    cin>>n>>w;
    int weight[n];
    int value[n];

    
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>value[i];
    }
    memset(dp,-1,sizeof(dp));
 

    
    
    
    cout<<knapsack(n,weight,value,w);
return 0;
}
