class Solution {
public:
    int smallestNumber(int n) 
    {
        int digit = 0;
        int i = n;
        bool status = true;

        for (;; i++)
        {
            int number = i;

            while (number != 0)
            {
                digit = number % 2;
                number /= 2;

                if (digit == 0)
                {
                    status = false;
                    break;
                }
                else
                {
                    status = true;
                }
            }

            if (status == true)
            {
                return i;
            }
        }
        return 0;
    }
};