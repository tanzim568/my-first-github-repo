#include <bits/stdc++.h>
using namespace std;
 
// Driver Code
int main()
{
    int a[5];
 
    // all elements of A are zero
    // memset(a, 'c', sizeof(a));
    // for (int i = 0; i < 5; i++)
    //     cout << char(a[i]) << " ";
    // cout << endl;
 
    // all elements of A are -1
    // memset(a, -1, sizeof(a));
    // for (int i = 0; i < 5; i++)
    //     cout << a[i] << " ";
    // cout << endl;
 
    // Would not work
    // memset(a, 2, sizeof(a)); // WRONG
    fill(a, a + 5, 2);
    for (int i = 0; i < 5; i++)
        cout << int(a[i]) << " ";
}