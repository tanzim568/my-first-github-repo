#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 50};
    vector<int> v2;
    //vector<int> v2(v,v+v.size());  //STL er under e sobkichu pointer maybe begin(),end() evabei neya lage cause er dynamically auto size shrink korte pare,,,ar array size fixed tail pointer diye(a,a+n) size mention kre deya lage
    v2 = v;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
        return 0;
}
