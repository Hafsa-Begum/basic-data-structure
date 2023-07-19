// link - https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    void input_heap(vector<int> &v, int x){
        v.push_back(x);
        int cur_indx = v.size()-1;
        while (cur_indx != 0)
        {
            int parent_indx = (cur_indx-1)/2;
            if(v[parent_indx]>v[cur_indx]){
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
                if(v[left_indx] <= v[right_indx] && v[left_indx]<v[cur_indx]){
                    swap(v[left_indx], v[cur_indx]);
                    cur_indx = left_indx;
                }
                else if(v[right_indx] <= v[left_indx] && v[right_indx]<v[cur_indx])               {
                    swap(v[right_indx], v[cur_indx]);
                    cur_indx = right_indx;
                }
                else break;
            }
            else if(left_indx<=last_indx){
                if(v[left_indx]<v[cur_indx]){
                    swap(v[left_indx], v[cur_indx]);
                    cur_indx = left_indx;
                }
                else break;
            }
            else if(right_indx<=last_indx){
                if(v[right_indx]<v[cur_indx]){
                    swap(v[right_indx], v[cur_indx]);
                    cur_indx = right_indx;
                }
                else break;
            }
            else break;
        }
     
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i<nums.size(); i++){
            input_heap(v, nums[i]);
        }
        vector<int> min_v;
        for(int i = 0; i<nums.size(); i++){
            min_v.push_back(v[0]);
            delete_heap(v);
        }
        return min_v;
    }
};