class Solution {
public:
    int countPrimeSetBits(int left, int right) 
    {
        int number = 0;
        int digit = 0;
        int bits = 0;
        int count = 0;
        bool status;

        for (int i = left; i <= right; i++)
        {
            number = i;
            bits = 0;

            while (number != 0)
            {
                digit = number % 2;
                number /= 2;

                if (digit == 1)
                {
                    bits += 1;
                }
            }

            if (bits == 1)
            {
                status = false;
            }
            else
            {
                status = true;
                for (int j = 2; j <= bits / 2; j++)
                {
                    if (bits % j == 0)
                    {
                        status = false;
                        break;
                    }
                }
            }

            if (status == true)
            {
                count += 1;
            }

        }
        return count;
    }
};