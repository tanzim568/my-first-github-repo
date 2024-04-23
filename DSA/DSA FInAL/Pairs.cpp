#include <bits/stdc++.h>
using namespace std;

class fun
{
    public:
        string name;
        int num;
    fun(string name,int num)
    {
        this->name = name;
        this->num = num;
    }
};

// class cmp
// {
//     public:
//     bool operator()(fun a, fun b)
//     {
//         if(a.name==b.name)
//         {
//             return a.num < b.num;
//         }
//         else
//             return a.name > b.name;
//     }
// };

bool cmp(fun a, fun b)
{
    if(a.name==b.name)
    {
        return a.num < b.num;
    
    }
    else
    {
        return a.name > b.name;
    }
}

    int main()
{
    int t;
    cin >> t;
    vector<pair<string,int>> v;
    while(t--)
    {
        
        string name;
        int num;
        cin >> name >> num;
        fun obj(name, num);
        v.push_back({name,num});
    }
  

    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().num << endl;
        pq.pop();
    }
    return 0;
}
