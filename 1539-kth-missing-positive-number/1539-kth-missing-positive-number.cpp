class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int count=1,i=0;
        while(i<arr.size())
        {
            while(count!=arr[i])
            {
                ans.push_back(count);
                count++;
            }
            i++;
            count++;
        }
        if(ans.size()>k)
        {
            return ans[k-1];
        }
        while(ans.size()<k)
        {
            ans.push_back(count);
            count++;
        }
    
        return ans[k-1];
    }
};