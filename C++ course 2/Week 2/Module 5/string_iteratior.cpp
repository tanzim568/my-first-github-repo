#include <bits/stdc++.h>
using namespace std;

int main()
{        //Iterator is also a pointer..like array ekta pointer int,float ,char data type er jonno ,same string er jonno iterator ekta pointer, ekta single string er each and every value ke access kora ke iteration bole
         string s;
         cin>>s;
         /*for (int i=0;i<s.size();i++)  // this is called iteration on a string through a loop ... eta pointer/array  diye o kora jay
         {                               // but string er alada iterator ache describing in below
            cout<<s[i]<<endl;
         }*/

        // cout <<*s.begin()<<endl; // as it is a built in function of a pointer so it will behave like a pointer ,, so we know to print value of a pointer we need to derefernce it otherwise it will print address or garbage values..but as it as a built function and it private data(class private ) so access kora jbe na
        //  cout <<*(s.end()-1)<<endl;

        // string::iterator it;  //string class er vitore  (namespace moto kore :: link kore) iterator :: eta diye erpor er variable /object niye oi object use kora lage

        // for (it=s.begin();it<s.end();it++)
        // {
        //    cout<<*it<<endl;
        // }


        
        // string::iterator it;  //evabeo likha jay or 

        // for (  string::iterator it=s.begin();it<s.end();it++)  //evabeo likha jay
        // {
        //    cout<<*it<<endl;
        // }

        

        for (auto it=s.begin();it<s.end();it++) cout<<*it<<endl; //auto & it ===> auto hochhe se auto detect korbe it kar iterator as ekhane string ache tai string er iterator hiseve use hobe  && it jehetu ekta pointer tai just it print korle error asbe as iterator private class deference kore *it print korte hobe

        


      return 0;

  
}
