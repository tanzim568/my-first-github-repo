#include <bits/stdc++.h>
using namespace std;

int main()
{
         string s;
         getline (cin,s);
         stringstream ln(s);
         string newrd;
         int cnt=0;
         while(ln>>newrd)
         {
            cnt++;
         }
         cout<<cnt<<endl;
    return 0;
}
