class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=-1, index;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
                index=i;
            }
        }
        return index;
    }
};