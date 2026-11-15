class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        int number = 0;
        int digit = 0;
        vector <int> self = {};
        bool status;

        for (int i = left; i <= right; i++)
        {
            number = i;
            status = false;

            while (number != 0)
            {
                digit = number % 10;
                number /= 10;

                if (digit != 0 and (i % digit == 0))
                {
                    status = true;
                }
                else
                {
                    status = false;
                    break;
                }
            }

            if (status == true)
            {
                self.push_back(i);
            }
        }

        return self;
    }
};