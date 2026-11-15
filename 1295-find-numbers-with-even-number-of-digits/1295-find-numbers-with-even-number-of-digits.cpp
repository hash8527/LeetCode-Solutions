class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int total = 0;
        
        for (int num: nums)
        {
            int number = num;
            int count = 0;

            while (number != 0)
            {
                number /= 10;
                count += 1;
            }

            if (count % 2 == 0)
            {
                total++;
            }
        }
        return total;
    }
};