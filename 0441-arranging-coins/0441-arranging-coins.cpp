class Solution {
public:
    int arrangeCoins(int n)
    {
        double sum = 0, i = 1, count = 0;;

        while (sum <= n)
        {
            sum += i;

            if (sum > n)
            {
                return count;
            }

            count += 1;
            i++;
        }    
        return count;    
    }
};