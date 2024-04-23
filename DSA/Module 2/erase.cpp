#include <bits/stdc++.h>
using namespace std;

int main ()
{
      vector<int > v={1,2,3,4,5};
      vector <int> v2={100,102,103,104};
       //v.erase(v.begin()+2); // single value delete e use hoi
       //v.erase(v.begin()+2,v.begin()+4); // sort er moto kore suru index theke last er aag porjonto delete krbe
         v.erase(v.begin()+2,v.end()-1); // end always last index er por thake size r end soman bola jay onk khetre tai function jehetu last er aag porjonto dlete krbe tai end ke ek ghor age nie ashlm so 3,4 dleete hoe gelo
      for (int x:v)
      {
        cout<<x<<" ";
      }
return 0;
}
