#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    // v.insert(v.begin()+2, 100); //output: 1 2 100 3 4 5 
    v.insert(v.begin()+2, x.begin(), x.end()); //output: 1 2 10 20 30 3 4 5
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

// note::::
// v.insert() ->used to insert elements into vector - time complexity-O(N) if N bigger or O(K) if K bigger
//here, N=vector size, K=how many elements need to insert

//v.insert(val1, val2) 
//here, val1=position where the elements will be placed
//val2=which value need to insert

//v.insert(val1, val2, val3) , here,
//val1=position where element inserting start
//val2=first element position to insert start position val1
//val3=last element positon till the element will be inserted