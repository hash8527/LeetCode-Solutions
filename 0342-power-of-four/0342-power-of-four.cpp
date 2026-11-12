class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        double sum = 1;

        if (n == 1)
        {
            return true;
        }
        else
        {
            for (int i = 1; sum <= n; i++)
            {
                sum *= 4;
                if (sum == n)
                {
                    return true;
                }
            }
        }
        return false;
    }
};