int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>mp;
        int mx=0;
        int pre_sum=0;
        mp[pre_sum]=-1;
        for(int i=0;i<N;i++)
        {
            pre_sum+=A[i];
            if(mp.find(pre_sum-K)!=mp.end())
            {
                mx=max(mx,i-mp[pre_sum-K]);
            }
            if(mp.find(pre_sum)==mp.end())
            {
                mp[pre_sum]=i;
            }
        }
        return mx;
    } 
