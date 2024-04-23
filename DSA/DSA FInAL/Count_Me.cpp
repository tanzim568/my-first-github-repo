#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        map<string, int> mp;
        string count;
    
        getline(cin, count);
        int mx = INT_MIN;
        string ans;
        string word;
        stringstream ss(count);
        while(ss>>word)
        {
            
           mp[word]++;
            if(mp[word]>mx)
            {
                mx = mp[word];
                ans = word;
            }
           
        }

        cout << ans << " " << mx << endl;

     
       
    }
    
    return 0;
}
