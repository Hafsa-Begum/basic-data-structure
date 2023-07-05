// link - https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;

        for(int i=1; i<=n; i++) q.push(i);
        int c = k;
        while(q.size()>1){
            int v = q.front();
            q.pop();
            c--;
            if(c==0){
                c=k;
            }
            else{
                q.push(v);
            }
        }
        return q.front();
    }
};