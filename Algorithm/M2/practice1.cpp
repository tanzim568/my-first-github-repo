#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int level[1005];
// bool vis[1005]={false}; evabeo kora jay but kono array initialize korele by default tar value 0 theke ja bool data type e false bujay
bool vis[1005]; // so evabe decalare korleo false e bujabe.. but etay ekta prblm hoyy jdi source er sthe connected na thkel emn kichu nodes then oder level 0 asbe as array te first ei 0 die sob initialize kora hoyeche .. ar 0 hochhe source er level so program e jamela howa chance ache..tai details e memset die -1 die initialize kora hoy so jara connected na tder -1 (unique value)
int parent[1005];



void bfs(int src)   
{
    queue<int> q;  //queue te pair nieyo level track rakha jay but eta save thkbe na globally while loop er moddei thkbe ,, jodi kokhon kon level ache i ba level search kora lge then ei pair e level track rakha hoi
    q.push(src);
    // cout << src << endl;
    level[src] = 0;
    vis[src] = true;
    
    while(!q.empty())
    {
          int par=q.front();
        q.pop();

        for(int child:v[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }

        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

  
    
    

    int q;
    cin >> q;
    while(q--)
    {
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

          int src,des;
        cin >> src >>des;
        bfs(src);
    //      vector<int> path;

    // while(des!=-1)
    // {
    //     path.push_back(des);
    //     des = parent[des];
    // }

    // cout << path.size()-1 << endl;

    // reverse(path.begin(), path.end());

    // for (int val:path)
    // {
    //     cout << val << " ";
    // }

    cout << level[des] << endl;
    }
    return 0;
}
