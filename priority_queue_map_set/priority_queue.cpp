#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue< int, vector<int>, greater<int> > pq;
    while (true)
    {
        int c; cin>>c;
        
        if(c==0){
            int x; cin>>x;
            pq.push(x);//O(logN)
        }
        else if(c==1){
            pq.pop(); //O(logN)
        }
        else if(c==2){
            cout<<pq.top()<<endl;//O(1)
        }
        else{
            break;
        }
    }
    
    return 0;
}

//priority queue is a type of data where same type data inserted maintaining line but
//different types data inserted based on priority
//to get max heap - priority_queue<int> pq;
//to get min heap - priority_queue<int, vector<int>, greater<int> > pq;