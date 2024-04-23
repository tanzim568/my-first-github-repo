#include <bits/stdc++.h>
using namespace std;

int main()
{
        string s="Hello this rizon";



        int ln=s.find("t");
        s.replace(6,2,"YO");
        cout<<ln<<endl;
        cout<<s<<endl;
        cout<<s.size();
    return 0;
}
