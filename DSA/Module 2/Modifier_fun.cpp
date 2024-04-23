#include <bits/stdc++.h>
using namespace std;

int main ()
{
      vector<int> v={2,3,4};
      vector<int > x={10,30,40,50};
    v=x; // vector 2 tir size same na hole completxity O(1) theke O(N) hoye jbe
    
    
    
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}
