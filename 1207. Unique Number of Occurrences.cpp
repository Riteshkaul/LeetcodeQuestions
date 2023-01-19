class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>st;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            st.insert(i->second);
        }
        if(mp.size()==st.size())
        {
            return true;
        }
        return false;
        
    }
};
