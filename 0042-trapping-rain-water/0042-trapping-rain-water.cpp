class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)return 0;
        int right=0,index=0;
        for(int i=0;i<n;i++)
        {
            if(right<height[i])
            {
                index=i;
                right=height[i];
            }
        }
        int left=0;
        int sum=0;
        for(int i=0;i<=index;i++)
        {
            left=max(left,height[i]);
            sum+=(left-height[i]);
        }
        left=right;
        right=0;
        for(int i=n-1;i>index;i--)
        {
            right=max(right,height[i]);
            sum+=(right-height[i]);
        }
        return sum;
    }
};