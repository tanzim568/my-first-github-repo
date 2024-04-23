#include <bits/stdc++.h>

using namespace std;

int main ()
{
      vector<int> v={1,2,3,4,3,3,6,60,6,3,2,1};
      //replace(v.begin()+2,v.end()-3,3,100); // ekhane theke shikhar bishoy hocche kivabe begin ar end er position change kora jay begin pointer index er hiseb mto 0 theke start hoy and jekhne last thkbe er por theke kaj krbe ar end ponter normally last element er por position thake oke okhan theke -(minus) kore kore right to left ana lge tarpor abar ei function end jekhane thake er aag mane last er aag projnto kaaj krbe, then vector er kon value replace korbo seta then ki diye replace krbo seta
      //find(v.begin(),v.end(),3);  // eta vector er under kono find na STL er normal find funtion eta onno library te int value return kore and na pele -1 return kore but STL e iterator return kore tai iterator diye vlaue recieve korte hoi
     //   vector <int> :: iterator it;
     //   it =find(v.begin(),v.end(),60);

    auto it =find(v.begin(),v.end(),67);

    // ei find er search korar system hochhe  je jodi kno value na pai then v.end sobar last mane last element er por position nibe. ar found hole sei vlaue e return kore dibe 
    

         (it==v.end())?cout<<"Not Found"<<endl:cout<<"Found";
      
    
    //   for (int x:v)
    //   {
    //     cout<<*x<<" ";
    //   }
return 0;
}
