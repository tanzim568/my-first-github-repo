#include <bits/stdc++.h>
using namespace std;

//adjacency list janay kon edge er sthe kar connection ba kono node er sthe ke ke connected
// matrix e bar bar loop chalano time complexity beshi ashay adjacency list use kora hoi
int main()
{
    int n, e;
    cin >> n >> e;
    // amra jokhon kno array initialize kori tokhon int a[5]; evabe likhi eta mainly hocche memory te 6 size er 5 ta sequecne ba block nea ja por por position ney memory te and sob gulo block int data type er
    // same way te vector <int> die initialize kore vector <int> mat[5] memory te  6 size er fixed sequence nea hoe jabe por por position nibe ora but sob block ei thakbe ek ekek ta int data type er vector
    // ei sob block ba index er vector gulo amra tder index die operate korte parbo example. 0th index mat[0].push_back(val) or mat[5].pop_back();
    vector<int> mat[n];//vectorer matrix //ekhane n node er highest value (0 - (n-1)) 
    // mat ekta 2D array ekhane karon vector amra jani dymanic array means se auto size baray push korle ar na krle ba pop() korle se oi block remove kore dey  but array use kore fixed array na dynamic node er moto push korle auto node niye connection dey ar remove korle sei node delete keyword dekhe delete kore dey
    // jehetu 2 ta array use hoise tai amra eke 2D array hisebei chinbo but vector diye create kora 2D array.. Normally int a[4][3] means sari 4 * 3 coloums ekhane sari hobe static array te ar  columns hobe  
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);//this will not be writtern in directed graph and the program will follow the direction given in problemset

    }

// output can be shown in below ways
    // for (int i = 0; i < mat[0].size();i++ )
    // {
    //     cout << mat[0][i] << " ";
    // }

    // for(int v:mat[3])
    // {
    //     cout << v << " ";
    // }
        return 0;
}
