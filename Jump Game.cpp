class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curMax=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(curMax<i)
            {
                return false;
            }
            curMax=max(curMax,nums[i]+i);
        }
        return true;
    }
};
