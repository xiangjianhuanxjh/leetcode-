class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int a;
        vector<int> c;
        for(int i=0;i<nums.size();i++)
        {
            a=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(a==nums[j])
                {
                    c.push_back(i);
                    c.push_back(j);
                    return c;
                }
            }
        }
        return c;
    }
};
