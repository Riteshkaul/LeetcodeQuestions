//using set
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        int i=0,j=0;
        while(j<nums.size())
        {
            if(abs(i-j)>k)
            {
                st.erase(nums[i]);
                i++;
            }
            if(st.find(nums[j])!=st.end())
            {
                return true;
            }
            st.insert(nums[j]);
            j++;
        }
        return false;
    }
};

// using map
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,j=1;
        while(j<nums.size())
        {
            mp[nums[i]]++;
            if(j-i<=k)
            {
                mp[nums[j]]++;
                if(mp.size()<j-i+1)
                {
                    return true;
                }
                j++;
            }
            else if(j-i>k)
            {
                mp.erase(nums[i]);
                i++;
            }
        
        }
        return false;
    }
};
