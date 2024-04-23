#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10,10, 20, 30, 10,40,10, 50};

    // myList.remove(10);

    // myList.sort();
    // myList.sort(greater<int>());

    myList.unique(); //remove duplicate values but it needed to be sorted in any order decending or ascending to use this function

    myList.reverse();

    cout << myList.front() << endl<<endl;
    cout << myList.back() << endl
         << endl;
    cout << /*next ekta iterator er loop alwaways iterator return kore tai */*next(myList.begin(), 4) << endl
         << endl;
    for(int val:myList)
    {
        cout << val << endl;
    }
    return 0;
}
