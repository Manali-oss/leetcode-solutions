class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x;
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            long long sqrt=1LL*mid*mid;
            if(sqrt==x)
            {
                return mid;
            }
            else if(sqrt<x)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};