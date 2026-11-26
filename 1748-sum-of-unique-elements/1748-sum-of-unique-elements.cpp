class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int sum = 0;
        bool status = true;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j and nums[i] != nums[j])
                {
                    status = true;
                }
                else if (i != j and nums[i] == nums[j])
                {
                    status = false;
                    break;
                }
            }

            if (status == true)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};