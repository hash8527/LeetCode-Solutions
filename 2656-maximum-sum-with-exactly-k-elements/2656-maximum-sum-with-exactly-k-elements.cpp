class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int max = 0, index = 0, big = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > big)
            {
                big = nums[i];
                index = i;
            }
        }

        for (int i = 0; i < k; i++)
        {
            max += nums[index];
            nums[index] = nums[index] + 1;
        }

        return max;
    }
};