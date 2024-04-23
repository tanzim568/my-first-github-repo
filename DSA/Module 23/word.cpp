#include <bits/stdc++.h>
using namespace std;

int main()
{
    string twords;
    map<string, int> mp;
    getline(cin,twords);
    string count;
    stringstream go(twords);
    while(go>>count)
    {
        // cout << count << endl;
        mp[count]++;
        
    }

    for (auto it = mp.begin(); it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
        return 0;
}
