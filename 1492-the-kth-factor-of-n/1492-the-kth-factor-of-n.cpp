class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int factor = 0, count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factor = i;
                count += 1;

                if (count == k)
                {
                    return factor;
                }
            }
        }

        return -1;
    }
};