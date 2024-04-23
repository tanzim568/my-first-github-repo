#include <bits/stdc++.h>
using namespace std;

int main ()
{
      vector<int > v={1,2,3,4,5};
      vector <int> v2={100,102,103,104};
        v.insert(v.begin()+2,10); // begin() and end() pointer use kore insert function // single value insert er kheter ei constructor use hoi
        v.insert(v.begin()+2,v2.begin(),v2.end());  // new vector insert korte chaile oi vector starting and ending pointer die dite hbe
        
      for (int x:v)
      {
        cout<<x<<" ";
      }
return 0;
}
