#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s,x;
        cin>>s>>x;
        int szs=s.size();
        int szx=x.size();
        for (int j = 0; j < szs; j++)
        {
            int a=s.find(x);
            if(a!=-1)
            {
               s.replace(a,szx,"#");
            }
            
        }  
  cout <<s<<endl;
    }
    
    
    return 0;
}