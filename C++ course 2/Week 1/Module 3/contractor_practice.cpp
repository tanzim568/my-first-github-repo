#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
     int kmh;
     int price;
     int cc;
   
   Car(int kmh,int price,int cc)
   {
     this->kmh=kmh;
     this->price=price;
     this->cc=cc;

   }

};

int main()
{
     Car bmw(300,350000,1200);
     Car audi(400,40000,2000);
     Car porche(380,380000,2200);

     cout <<bmw.kmh<<" "<<bmw.price<<" "<<bmw.cc<<endl;
     cout <<audi.kmh<<" "<<audi.price<<" "<<audi.cc<<endl;
     cout <<porche.kmh<<" "<<porche.price<<" "<<porche.cc<<endl;
         
    return 0;
}
