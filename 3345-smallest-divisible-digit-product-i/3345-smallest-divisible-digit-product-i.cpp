class Solution {
public:
    long long smallestNumber(int n, int t) 
    {
        long long digit = 0, sum = 1, number = 0;
        for (long long i = n;; i++)
        {
            digit = 0, sum = 1, number = i;

            while (number != 0)
            {
                digit = number % 10;
                number /= 10;

                sum *= digit;
            }

            if (sum % t == 0)
            {
                return i;
            }
        }
        return 0;
    }
};