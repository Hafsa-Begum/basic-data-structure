link - https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return -1;
        vector<int> preSum(n,0);
        preSum[0] = nums[0];
        for(int i = 1; i<n; i++){
            preSum[i] = nums[i] + preSum[i-1];
        }
        int leftSum = 0, rightSum = 0;
        for(int i = 0; i<n; i++){
            leftSum = (i==0) ? 0 : preSum[i-1];
            rightSum = preSum[n-1] - preSum[i];
            cout<<leftSum<<" "<<rightSum<<endl;
            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }
};