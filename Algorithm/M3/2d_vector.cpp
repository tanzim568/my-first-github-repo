#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<vector<int>> v(5,vector<int>(6));
    

    // for (int i = 0; i < 5; ++i) {
    //     for (int j = 0; j < 6; ++j) {
    //         cout << v[i][j] << " ";
    //     }
    //    cout << endl;
    // }

    // vector<int> v(5,vector(10));
    // for (int i = 0; i < 5;i++)
    // {
    //     cout << v[i] << " ";
    // }



    
//       /* 
// C++ program to demonstrate a 2D vector where 
// each of its elements is of different size. 
// */

 
// 	/* 
// 	We initialize a 2D vector 
// 	named "vect" on line 16 with 
// 	different number of values 
// 	in each element. 
// 	*/
	
	vector<vector<int>> vect {{1, 2},{4, 5, 6},{7, 8, 9, 10},{6,4,5,6}}; 

	/* 
	Now we print the vector that we 
	just defined using a simple 
	nested for loop. 
	*/
    int i = 3;
    cin >> i;
    cout <<"row "<<i<<" er size "<< vect[i].size() << endl<<endl;

    for (int i = 0; i < vect.size(); i++) 
	{ 
		for (int j = 0; j < vect[i].size(); j++) 
		{ 
			cout << vect[i][j] << " "; 
		}	 
		cout <<"   "<<"row "<<" "<<i<<endl; 
	} 









// Initialize a 2D vector with 3 rows and 4 columns, all elements set to 0
// int rows = 3;
// int columns = 4;
// int initialValue = 6;

// vector<vector<int>> v2(rows,vector<int>(columns, initialValue));

// // Print the 2D vector
// for (int i = 0; i < rows; ++i)
//  {
//    for (int j = 0; j < columns; ++j)
//     {
//        cout << v2[i][j] << " ";
//     }


// cout << "\n";
//  }
//  cout << v2[0].size() << endl;

 return 0; 
}	 



















