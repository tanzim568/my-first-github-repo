#include <bits/stdc++.h>
using namespace std;

       class Student  //the size of class will be the total size of data type sizes in it
       {
          public:
             char name[100];  //char array jekhane initialize hoy sekhanei char name[100]="...." evabe likha jay onno kothao jay na
             int roll;
             double cgpa;
         };

int main()
{
     
     Student a,x;     
     cin.getline(a.name,100);  /*shudu 1 line space soho char nibe ar cin space ney na*/ cin>>a.roll>>a.cgpa; /*jehetu cin char ney tai erpor enter press hoy multiple input selection e tai ei enter ta getchar die amra khali jaygay fele di*/
     
     getchar();
     cin.getline(x.name,100); //ei ek cin.getline diye sob input neya jabe na tahole prblm hobe cz getline ekbabe input ney space aro onno char soho ar cin ekbabe tai onno arek cin niye sekhane input nite hbe
     cin>>x.roll>>x.cgpa;

     cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;           
     cout<<x.name<<" "<<x.roll<<" "<<x.cgpa;           
    
    
         


        
    return 0;
}
