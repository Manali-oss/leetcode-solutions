class Solution {
public:
    int mySqrt(int x) {
        int i=0,j=x;
        int ans=0;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            long long s=1LL*mid*mid;
            if(s==x)
            {
                ans=mid;
                break;
            }
            else if(s<x)
            {
                ans=mid;
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return ans;
    }
};