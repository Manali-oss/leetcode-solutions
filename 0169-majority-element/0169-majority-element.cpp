class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(n==nums[i+1])
            {
                count++;
            }
            else
            {
                count--;
                if(count<0)
                {
                    count=0;
                    n=nums[i+1];
                }
            }
        }
        return n;
    }
};