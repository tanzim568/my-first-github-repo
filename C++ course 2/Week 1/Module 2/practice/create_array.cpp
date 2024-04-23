#include <bits/stdc++.h>
using namespace std;
int* fun ()
{
    int *a=new int[5];  //In terms of array heap memory always address pathay ar static memory always value pathay address hisebe array er khetre shudu
    for (int i=0;i<5;i++)
    {
        cin >> a[i];  //index diye array access procedure online pawa jabe tao short details e bolle shudu eituk bola jay je , array pointer hok ba arra var_name 2 khetrei first index er address receive korbe and pore oi first index diye serially int hole 4 bit por por value gulo onujai value niye nibe
    }
  return a;
}

int main()
{
        int a=fun ();
        for (int i=0;i<5;i++)
        {
            cout <<a[i]<<" ";
        }
    return 0;
}




