class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        for(int i=0;i<weights.size();i++)
        {
            start=max(start,weights[i]);
        }
        int end=0;
        for(int i=0;i<weights.size();i++)
        {
            end+=weights[i];
        }
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int pack=0,count=1;
            for(int i=0;i<weights.size();i++)
            {
                pack+=weights[i];
                if(pack>mid)
                {
                    count++;
                    pack=weights[i];
                }
            }
            if(count<=days)
                {
                    ans=mid;
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
        }
        return ans;
    }
};