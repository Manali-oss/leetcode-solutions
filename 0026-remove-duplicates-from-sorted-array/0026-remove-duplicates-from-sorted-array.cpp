class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=v.back())
            {
                v.push_back(nums[i]);
            }
        }
        for(int i = 0; i < v.size(); i++)
        {
            nums[i] = v[i];
        }
        return v.size();
    }
};