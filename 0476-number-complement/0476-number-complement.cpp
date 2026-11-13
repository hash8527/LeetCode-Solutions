class Solution {
public:
    int findComplement(int num)
    {
        int digit = 0;
        int sum = 0, count = 0;

        while (num != 0)
        {
            digit = num % 2;
            num /= 2;

            if (digit == 0)
            {
                sum += pow(2, count);
            }
            count += 1;
        }
        return sum;
    }
};