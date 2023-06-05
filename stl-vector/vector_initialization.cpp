#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; type-1
    // vector<int> v(5); type-2
    // vector <int> v(5, 9); type-3, here 5 is size, all elements values are 9
// vector <int> v2(6, 10);
// vector <int> v(v2); type-4, values of v2 copied to v
// int a[5]={1, 2, 3, 4, 5};
// vector <int> v(a, a+5);
// vector<int>v={1,2,3}; //showing error
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}