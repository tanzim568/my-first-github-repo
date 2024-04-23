#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005]; // size always highest node value er soman nibo ba tar beshi
bool vis[1005]; // jotogulo nodes thakbe sobar jonne ekbar kore count kora hbe tai sob node er jnne ekti kore bool data type er array nilam

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
   {
       int par = q.front();
       q.pop();

       cout << "parent :" << par << endl;

// indexed for loop
    //    for (int i = 0; i < v[par].size();i++)
    //    {
    //        int child = v[par][i];
    //        //cout << "chile of parent :" << child << endl;
    //        if(!vis[child])
    //        {
    //            q.push(child);
    //            vis[child] = true;


    //        nb }

    //for short term usage range based for loop
     for (int child:v[par])
     {
        if(!vis[child])
        {
            q.push(child);
            vis[child] = true;

        }
     }
   }
}  

int main()
{
         int n,e;
         cin >> n >> e;
         while(e--) 
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        int src;
        cin >> src;
        //memset(vis, false, sizeof(vis));
        bfs(src);

        return 0;
}
