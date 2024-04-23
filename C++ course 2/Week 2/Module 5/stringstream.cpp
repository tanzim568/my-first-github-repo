#include <bits/stdc++.h>
using namespace std;

int main()
{
        //  stringstream hochhe koyekte string er somosti and sob string er majkhane space thkbe obossoi,
       string s;
       getline(cin,s);
       stringstream ss(s); //stringstream ekta class and object ss ar er constractor hochhe stringstream ss(), ei class ti string er kaj korar jonno create kora hoeche ,, eita string theke word extract kore onno oarekta variable e store kore ,,cause object direct value  print korte pare na, constractor hoyar amra parameter e variable pass kore diyechi and sei variable er vitorer string theke word extract korbe jehetu se value return korbe tai and value string data type er hobe tai onno arekta string  er variable e seta store kore nite hoy
       string word;
       ss>>word;
        cout<<word<<endl;
       ss>>word;
        cout<<word<<endl;
       ss>>word;
        cout<<word<<endl;
       ss>>word;
        cout<<word<<endl;
       ss>>word;
        cout<<word<<endl;
    // while (ss>>word) //EOF kaj korbe input file sesh na howa porjonto se extract korte thakbe
    // {
    //     /* code */
    //     cout<<word<<endl;
    // }
    
    return 0;
}
