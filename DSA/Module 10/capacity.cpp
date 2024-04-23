#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {1, 2, 3, 4, 10};
    // cout << mylist.size()<<endl;
    // cout << mylist.max_size(); //dynamically size auto increae hoi na vector er moto cause linked list e dynamic object niye kal korlei jekhono random address memory ene list e connection deya hoi tai auto size barano komanor kono logic nei,, maxsize holo maybe eto gulo value insert korte parbe ba data type onujai value nite parbe
    // mylist.clear();
    // mylist.empty() //boolear return kre
   
   
    // cout<<mylist.size()<<endl;
    mylist.resize(2); //index 2 soho er porer sob index 
    // cout << endl;
    mylist.resize(5,100); //index 2 soho er porer value gulo te 100 rekhe dibe ar value na dile mylist.resize(5) evabe dile 0 boshay dibe
    for(int val:mylist)
    {
        cout << val << endl;
    }
    return 0;
}
