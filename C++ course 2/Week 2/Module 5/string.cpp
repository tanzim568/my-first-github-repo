#include <bits/stdc++.h>
using namespace std;
//    string behave like a class and we know we can access its object with a dot.
    //    so its a buit in class in c++ and we can access its object with . ex- str.size(),str.empty(),str.clear. etc..
    //  string er built in object gulo dynamically kaj kore..like dynamic array te delete kora size barano size delete evabe  
int main()
{
         string s="Hello";
        //  s.clear();
        //  string s1="lovely";
        //  if (s==s1)cout<<"same";
        //  else cout<<"Not Same";

        // cout<<s.size()<<endl;
        // cout<<s.max_size()<<endl;
        // cout<<s.capacity()<<endl;
        //  s="gotomycabintetandovservedtherby";
        //  cout<<s.size()<<endl;
        //  cout<<s.max_size()<<endl;
         
        // cout<<s.capacity()<<endl;
        //    s.empty()  it check the length of the string

        // bool st=s.empty();

        // (s.empty()==true)?cout<<"YES":cout<<"NO"<<endl;   

  

        // cout<<st<<endl;

        s="ilovemycountrybangladeshandlovemyselftoomuchlovefitnessandworkout";

        // cout<<s.size()<<endl;
        // cout<<s.capacity()<<endl;
         
         s.resize(20);// ooo 20 ta character niye baki gulo delete[] kore dibe pore size baray resize korleo oi character ogula pawa jbe na
         s.resize(25,'A'); // ei character shudu string e char short porlei means ami 25 ta access korte chachhi but char ache 20 ta tokhon applicable hobe but char aceh 30 ta ami 25 diye A dileo se A bosabe na cz or kache char ache enough new char se nibe na ekhon short porle nibe
         cout<<s;
         

    return 0;
}
