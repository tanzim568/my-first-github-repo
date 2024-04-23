#include <bits/stdc++.h>
using namespace std;


// edge list edge gulo reserve kore rakhe then pore eta niye kaj kora jay
int main()
{
    int n, e;
    cin >> n >> e;
    //  pair<int, int> mat[e];//evabe kora jay but eta korle index control kore loop chalay then sob index ekta ekta ekta kore pair rakhte hbe hastle extra //n die node value nichhi amra mane highest koto node er value hoite pare ar e die total koyta edge ache.. so jehetu edge list edge reserve rakhe tai jotogulo edge totogulo pair nibo means totogulo index er size hobe jdi edge total 6 dey then {0,1,2,3,4,5} ei 6 ta index pabo array te pair rekhe access korar jonne

    // for (int i = 0; i < e; i++)
    // {
     
    //     cin >> mat[i].first >> mat[i].second;
    // }

    // for (int i = 0; i < e;i++)  
    // {
    //     cout << mat[i].first << " " << mat[i].second << endl;
    // }

    // vector diye hastle free edge list e input neya jay

    vector < pair<int, int>> v;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    // for output system 1
    // for (int i = 0; i < v.size();i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    //output system 2

    for(pair<int,int> p:v)
    {
        cout << p.first << " " << p.second << endl;
    }
 
   //output system 3 (auto is for advanced coder not recommended for beginners)
    for(auto p:v)
    {
        cout << p.first << " " << p.second << endl;
    }

        return 0;
}
