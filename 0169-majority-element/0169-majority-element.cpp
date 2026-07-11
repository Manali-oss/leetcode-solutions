class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num=nums[0],count=1;
        for(int i=1;i<n;i++)
        {
            if(num==nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count<0)
                {
                    count=0;
                    num=nums[i];
                }
            }
        }
        return num;
    }
};