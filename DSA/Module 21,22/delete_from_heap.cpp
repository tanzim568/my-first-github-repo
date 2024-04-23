#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector <int> &v,int x)  //max heap insert
{
    v.push_back(x);
        int cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            int parent = (cur_idx - 1) / 2;
            if (v[parent] < v[cur_idx])
                swap(v[cur_idx], v[parent]);
            else
              {  break;}
            cur_idx = parent;
    }

}
void delete_heap(vector <int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;

    while(true)
    {
        int left_idx = (cur * 2 + 1);
        int right_idx = (cur * 2 + 2);
        int last_idx = (v.size() - 1);
        
        if(left_idx <= last_idx && right_idx <= last_idx)
        {
            //duitai index e ache 
            if(v[left_idx]>=v[right_idx] && v[left_idx]>v[cur])
            { // left index er value boro soman right idx but boro cur theke
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx]>=v[left_idx] && v[right_idx]>v[cur])
            { // right idx er value boro soman left idx er theke but boro cur theke
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else 
            {
                // left right index 2 tai ache but choto cur theke mane paren theke chilren choto tai kichu kra lgbe na break loop theke 
                break;
            }
       
        }
          else if(left_idx<=last_idx)
         {
            //shudu left ache
            if(v[left_idx]>v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else 
            {
                //left ache but parent theke choto tai break loop er vahire soja
                break;
            }

         }
          else if(right_idx<=last_idx)
          {
            // shudu right ache
             if(v[right_idx]>v[cur])
             {
                 swap(v[right_idx], v[cur]);
                 cur = right_idx;

             }
             else
             { // right ache but parent boro children theke  va cur boro kno prblm nei ar tai break krbo
                 break;
             }   
          }
          else 
          {
            //left and right ektao nei
              break;
          }
         
            
    }
}

void print(vector<int> v)
{
    for(int val: v)
    {
        cout << val << " ";
    }
}



int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    // print(v);
    delete_heap(v);
    // delete_heap(v);
    print(v);

    return 0;
}
