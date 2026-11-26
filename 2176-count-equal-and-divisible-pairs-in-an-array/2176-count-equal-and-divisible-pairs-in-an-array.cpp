class Solution {
public:
    int countPairs(vector<int>& nums, int k) 
    {
        int output = 0, size = nums.size();

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j] && (i * j) % k == 0)
                {
                    output++;
                }
            }
        }   
        return output;
    }
};