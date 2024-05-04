#include <bits/stdc++.h>
using namespace std;

 int sum =0;

void rec(int a[],int n)
{
    if(n==0) return;
    int i=n-1;
   
    sum += a[i];
    rec(a,n-1);
    
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


    rec(a,n);
    cout<<sum;
    // int x=10;
    // cout<<x;
      
return 0;
}
