class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int min = nums[0], max = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            else if (nums[i] < min)
            {
                min = nums[i];
            }
        }

        int devisor = 1;

        for (int i = 2; i <= min; i++)
        {
            if (max % i == 0 and min % i == 0 and i > devisor)
            {
                devisor = i;
            }
        }
        return devisor;
    }
};