#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
      sort(s.begin(),s.end()); //sort function ke 2 ta jinis dite hoy, starting pointer and ending pointer,sort function ending pointer er aag porjonto sort kore dey, ending er aag porjonto sort korbe cz s.end() aro onek function e use kora hoy jekhane er aag porjonto count kora lage like iterator in string e loop er khetre i<s.end(); emon aro function ase future e dehano hbe  
      cout<<s;                 // so, sesh er porer ghorer pointer dile se puto string sort korbe , ar seta holo n+1 ba   
    
    return 0;
}
