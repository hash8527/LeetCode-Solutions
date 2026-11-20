class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector <int> ans;
        int total;
        for (int i = 0; i < nums.size(); i++)
        {
            total = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    total += 1;
                }
            }
            ans.push_back(total);
        }
        return ans;
    }
};