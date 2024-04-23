#include <bits/stdc++.h>
using namespace std;

class fun
{
    public:
        string name;
        long long  num;
    fun(string name,long long num)
    {
        this->name = name;
        this->num = num;
    }
};

class cmp
{
    public:
    bool operator()(fun a, fun b)
    {
        if(a.name==b.name)
        {
            return a.num < b.num;
        }
        else
            return a.name > b.name;
    }
};


int main()
{
    int t;
    cin >> t;
    priority_queue<fun,vector<fun>,cmp>pq;
    while(t--)
    {
        
        string name;
        cin.ignore();
        long long  num;
        cin >> name >> num;
        fun obj(name, num);
        pq.push(obj);
    }
  

    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().num << endl;
        pq.pop();
    }
    return 0;
}
