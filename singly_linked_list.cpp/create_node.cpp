#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
int main()
{
    Node a, b;

    a.val=10;
    b.val=20;
    a.next=&b;
    b.next=NULL;

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<a.next->val<<endl;
    cout<<(*a.next).val<<endl;
    return 0;
}

//problems with array
// - needs sequencial space in memory for array, so requires a large space at a time in sequencially