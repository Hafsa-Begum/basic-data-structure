#include <bits/stdc++.h>
using namespace std;

void input_heap(vector<int> &v, int x){
    v.push_back(x);
    int cur_indx = v.size() - 1;
    while(cur_indx != 0){
        int parent_indx = (cur_indx - 1)/2;
        if(v[parent_indx]<v[cur_indx]){
            swap(v[parent_indx], v[cur_indx]);
        }
        else break;
        cur_indx = parent_indx;
    }
}
void delete_heap(vector<int> &v){
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur_indx = 0;
    while (true)
    {
        int left_indx = cur_indx * 2 + 1;
        int right_indx = cur_indx * 2 + 2;
        int last_indx = v.size()-1;
        if(left_indx <= last_indx && right_indx <= last_indx){
            if(v[left_indx] >= v[right_indx] && v[left_indx]>v[cur_indx]){
                swap(v[left_indx], v[cur_indx]);
                cur_indx = left_indx;
            }
            else if(v[right_indx] >= v[left_indx] && v[right_indx]>v[cur_indx]){
                swap(v[right_indx], v[cur_indx]);
                cur_indx = right_indx;
            }
            else break;
        }
        else if(left_indx<=last_indx){
            if(v[left_indx]>v[cur_indx]){
                swap(v[left_indx], v[cur_indx]);
                cur_indx = left_indx;
            }
            else break;
        }
        else if(right_indx<=last_indx){
            if(v[right_indx]>v[cur_indx]){
                swap(v[right_indx], v[cur_indx]);
                cur_indx = right_indx;
            }
            else break;
        }
        else break;
    }
     
}
int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    vector<int> v;
    int ans;
    for(int i = 0; i<n; i++){
        input_heap(v, arr[i]);
    }
    
    if(v.size()>=4){
        for(int i = 1; i<=3; i++){
            delete_heap(v);
        }
        ans = v[0];
    }
    else ans = -2147483648;
    
    return ans;
}