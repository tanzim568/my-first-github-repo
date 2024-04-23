#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {0, 1, 2, 3, 45, 5};
    // list<int> newList;
    // newList = mylist;
    list<int> oddlist = {34, 45, 2355, 235};
    vector<int> v = {10, 30, 45, 50};
    /* push and pop functions are another name of insert head & insert tail functions accordingly. */
    // mylist.push_back(100);
    // mylist.push_front(200);
    // mylist.pop_back();
    // mylist.pop_front();
   /* the complexities of all push and pop operations are O(1)*/
    mylist.insert(next(mylist.begin(), 7), 150); // linked list index follow kore chole na tai loop chalay tmp er oi khane insert kore tai vector er moto ekhane insert(v.begin()+2,100); evabe likha hoi na but 2 khetrei complexity O(N*K)
    // ei loop cycle onujai chole last index er por insert korle abar head theke insert howa suru kore
    //same on erase function
    // mylist.erase(next(mylist.begin(), 3));
     //multiple insert
     // jai insert kori variable insert korle tar starting pointer and ending pointer ar value insert korle curly braces er vitor value diye dite hbe
    mylist.insert(next(mylist. begin(), 2), {100, 300, 400});
    mylist.insert(next(mylist.begin(), 2), oddlist.begin(), oddlist.end());
    mylist.insert(next(mylist.begin(), 2), v.begin(), v.end());
    
    //same on erase function
    // jodi kono single value erase kore hoy then uporer erase funciton ar ekta certain point theke arekta means mulitple value por por thaka value erase korte hole ei function
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 7));
    
    // replace funtion
    replace(mylist.begin(), mylist.end(), 45 /*kon value replace krbo list theke*/, 500 /*replace kore kon value bosabo*/);
    // STL er under ei but onno component algorithm  er function tai vector ar list, era STL container e same vabei apply hbe
    

    //find function iterator return kore
    auto it = find(mylist.begin(), mylist.end(), 908);

    cout << *it<<endl<<endl;
    (it == mylist.end()) ? cout << "Not Found" : cout << "Found" << endl;
    for (int val : mylist)
    {
        cout << val << endl;
    }
        return 0;
}
