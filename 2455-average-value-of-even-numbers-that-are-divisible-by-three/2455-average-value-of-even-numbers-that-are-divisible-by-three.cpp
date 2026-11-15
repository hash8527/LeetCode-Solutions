class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        double sum = 0, count = 0;

        for (int n: nums)
        {
            if (n % 2 == 0 and n % 3 == 0)
            {
                sum += n;
                count ++;
            }
        }

        if (count != 0)
        {
            return (sum / count);
        }
        else
        {
            return 0;
        }
    }
};