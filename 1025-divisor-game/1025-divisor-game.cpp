class Solution {
public:
    bool divisorGame(int n)
    {
        for (int i = 1;; i++)
        {
            bool status = false;

            for (int x = 1; x < n; x++)
            {
                if (n % x == 0)
                {
                    n -= x;
                    status = true;
                    break;
                }
            }

            if (status == false and i % 2 == 1)
                {
                    return false;
                }
            else if (status == false and i % 2 == 0)
                {
                    return true;
                }
        }
    }
};