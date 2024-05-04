// #include <bits/stdc++.h>
// using namespace std;
// const int N=1050;
// char a[N][N];
// bool vis[N][N];
// int dis[N][N];
// int x,y;
// // pair<int,int> parent[N][N];
// map<pair<int,int>,pair<int,int>> mp;
// int n,m,cmp;
// vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};

// bool valid(int i,int j)
// {
//     return (i>=0 && i<n && j>=0 && j<m );
// }

// void bfs(int si,int sj)
// {
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;

//     while(!q.empty())
//     {
//         pair<int,int> par=q.front();
//         q.pop();
//         // cout<<par.first<<" "<<par.second<<endl;
//         // cmp++;

//         for(int i=0;i<4;i++)
//         {
//             int ci=par.first+d[i].first;
//             int cj=par.second+d[i].second;

//             if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj] != '#')
//             {
//                 // cout<<ci<<" "<<cj<<" ischild off "<<par.first<<" "<<par.second<<endl;
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 // mp.insert({ci,cj},{par.first,par.second});
//                 mp[{ci,cj}] = {par.first,par.second};
//                 // parent[ci][cj] = {(par.first,par.second)};
//             //     if(a[ci][cj]=='R') return;
//             //    else a[ci][cj]='X';
               


//             }
//         }

         
//     }
// }

// int main ()
// {
//    cin>>n>>m;
//    int si,sj,di,dj;
  
//   //input checked
//    for(int i=0;i<n;i++)
//    {
//       for(int j=0;j<m;j++)
//       {
//         cin>>a[i][j];
//         if(a[i][j]=='D')
//         {
//             si=i;
//             sj=j;
//         }
//         if(a[i][j]=='R')
//         {
//             di=i;
//             dj=j;
//         }
//         //output checked 


//       }
//    } 
// //    cout<<si<<sj;
//    bfs(si,sj);


// //   while ()
// //   {
    
// //   }
  
  

// //    for(int i=0;i<n;i++)
// //    {
// //     for(int j=0;j<m;j++)
// //     {
// //         // cout<<a[i][j];
// //         if(!vis[i][j] && a[i][j]!='#')
// //         {
// //             bfs(si,sj);
// //         }
// //     }
// //     // cout<<endl;
// //    }

// //      for(int i=0;i<n;i++)
// //    {
// //     for(int j=0;j<m;j++)
// //     {
// //         cout<<a[i][j];
       
// //     }
// //     cout<<endl;
// //    }

   
   
// // for(auto it= mp.begin();it!=mp.end();it++)
// // {
// //     // cout<<it->first.first<<it->first.second<<" parent -> "<<it->second.first<<it->second.second<<endl;
// //     if(a[it->first.first][it->first.second]=='R')
// //   {
// //     int x=it->first.first;
// //     int y=it->first.second;
// //     while(a[x][y]!='D')

// //     {
// //     cout<<it->second.first<<it->second.second<<endl;
// //     int x=it->second.first;
// //     int y=it->second.second;
// //     }
    
//     pair<int,int> des={di,dj};
//     pair<int,int> src={si,sj};
//     // mp[src]={-1,-1};
//     // pair<int,int>x=mp[src];

//     // cout<<mp[src].first<<" "<<mp[src].second;
    
    
//     // cout<<src.first<<" "<<src.second;
// //   }       


// // }
// // bool cycle=false;

// // map<pair<int,int>,pair<int,int>>::iterator it = mp.end();
// // cout<<mp[des].first<<" "<<mp[des].second;
// while(mp[des]!= mp[src])
// {
//     // cout<<mp[des].first<<" "<<mp[des].second<< " -> source "<<mp[src].first<<mp[src].second<<endl;
//     // cout<<mp[des].first<<" "<<mp[des].second<<endl;
//     if(a[mp[des].first][mp[des].second]=='D') break;
//     else a[mp[des].first][mp[des].second]='X';
//     des=mp[des];
//     // cout<<mp[src].first<<
// }

//      for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//         cout<<a[i][j];
       
//     }
//     cout<<endl;
//    }



// // while(it!=mp.begin())
// // while(a[it->first.first][it->first.second]!='D')
// // while(it!=mp.begin())
// // {
// //     if(a[it->first.first][it->first.second]=='D')
// //     {
// //         break;
// //     }
// //     if(a[it->first.first][it->first.second]=='R')
// //     {
// //         cycle=true;
// //         cout<<it->second.first<<it->second.second;
// //         // continue;
// //     }
// //     if(cycle)
// //     {
// //         cout<<it->second.first<<it->second.second;

// //     }
// //     it--;
    
// //  }
//     // it--;
    
   


// // for(auto it= mp.begin();it!=mp.end();it++)
// // {
// //      if(a[it->first.first][it->first.second]=='R')
// //      {
// //         //  x=it->first.first;
// //         //  y=it->first.second;
// //         cout<<it->second.first<<it->second.second;
// //        cout <<a[it->second.first][it->second.second];
        
        
// //      }
// // }
// // cout<<x<<y;

// // while(a[x][y]!='D')
// // {
// //     cout<<mp[{x,y}];

// // }

   

   


// //    memset(vis,false,sizeof(vis));
// //    int mn=INT_MAX;
// //    int cnt=0;
// //    for(int i=0;i<n;i++)
// //    {
// //       for(int j=0;j<m;j++)
// //       {
          
// //           if(!vis[i][j] && a[i][j]!='-')
// //           {
// //             // cout<<i<<" "<<j<<endl; 
// //             cmp=1;
// //             cnt++;
// //             bfs(i,j);
// //             // cout<<cmp<<endl;
// //             mn=min(cmp,mn);
// //           }

// //       }
// //    }
 
    



// return 0;
// }



#include <bits/stdc++.h>
using namespace std;


void rec(int n)
{
    if(n>=10) return;
    cout<<n<<endl;
     rec (n+1);
}

int main ()
{

    // rec(1);
    cout<<4;
      
return 0;
}

