#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        string s;
        cin>>s;
        int sum=0;
        int sum1=0;

        for (int i=0;i<3;i++)
        {
           sum+=s[i];
        }
        for (int i=6;i>=3;i--)
         {
            sum1+=s[i];
         }

         (sum==sum1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
