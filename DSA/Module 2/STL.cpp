#include <bits/stdc++.h>
using namespace std;

int main ()
{
      /*STL : Standart Template library (Data Structures & Algorithms library)
       It consist of three main components 
       a.container
       b.Iterator
       c.Algorithm
       
       */
      // Dynamic Array er STL/library hocche ==>> Vector ba STL er ekta class hochhe Vector
  
      // ekhane first index create hoi na as ei STL template vector dynamically kaj kore so sshee tar size incrase ba decrease krte pare tai agei v[2]=100; evabe value initialize kora jbe na,, like string or others plces , first e make sure korte hbe je oi index available ache ki na
    
      //vector <int> v; // type 1  just initializing vector but no values.. so if we do output loop garbage value will appear.
      //vector <int > v(5); // type 2 constructor : here only size is initialized but no values , so n size array will appear with some garbage values or maybe zeros.
      //vector <int > v(5,10); // type 3 constructor ; here size and values are declared;
      //vector <int> v2(5,12); // new vector initialied v2 here for type 4 purpose
      //vector <int > v(v2);   //    type 4 constructor ; here vector v2 are copied to v vector  ;
      // int a[6]={1,2,3,4,5,6};
      // vector <int > v(a,a+6);  //type 5;
      vector<int> v={1,2,3};
      for (int i=0;i<v.size();i++)
      {
              cout<<v[i]<<" ";
      }
      cout<<endl;
      // cout<<v.size()<<endl;

       




      

return 0;
}
