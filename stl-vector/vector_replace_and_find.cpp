#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    v.push_back(18);
    v.push_back(29);
    v.push_back(3);
    v.push_back(2);
    // replace(v.begin(), v.end(), 2, 500); //output: 1 500 500 4 7 500 5 9 10 18 29 3 500
    // replace(v.begin(), v.end()-1, 2, 500); //output: 1 500 500 4 7 500 5 9 10 18 29 3 2
    // vector<int>::iterator it;
    // auto it = find(v.begin(), v.end(), 3); //output- Found
    auto it = find(v.begin(), v.end(), 100); //output- Not Found
    if(it==v.end()) cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    return 0;
}

// note::::
//replace(v1, v2, v3, v4) -> used to replace particular element in vector
//v1=starting position of replacing element
//v2=ending position of replacing element
//v3=this will placed in particular position
//v4=this will be replaced be v3


//find(v1, v2, v3) -> used to find a value in vector - time complexity - O(N)
// v1= starting position from where finiding start
// v2 = ending position till where value will be searched or found
// v3 = this needs to be found in the vector