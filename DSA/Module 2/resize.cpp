#include <bits/stdc++.h>
using namespace std;

int main ()
{
      vector <int> v;
      v.push_back(5);
      v.push_back(6); // first e v er size capacity 0 thkbe as dynamically allocation hoi so , value initialize er sthe sthe seo capacity increase krbe  egula kore jate memory waste na hoi, capacity se double vabe increase krbe n*2 akare 
      v.push_back(8);
      v.push_back(4);
      v.push_back(3);
      v.push_back(2);
      v.push_back(7);
      v.push_back(5);
      v.push_back(1);
    //   v.clear();  // clear e outer ba surface memory clear hoileo heap memory clear hoy na vitore value thekei jay
    
    // v.resize(2);
    v.resize(18,50); // vector er ei constructor ta mainly surface memory r  value na pele ,(comma r por) er por je value pabe seti er age value var porjonto bosiye dibe

    
      for (int i=0;i<v.size();i++)
      {
        cout<<v[i]<<" ";
      }
    //   cout<<v[5];// so values delete hoi ni proved r heap memory ei value clear ba onno function diye delete krleo delete hobe until heap theke dleete kora hochhe
    
    //   cout<<endl;
      
    //   cout<<v.capacity()<<endl;
return 0;
}
