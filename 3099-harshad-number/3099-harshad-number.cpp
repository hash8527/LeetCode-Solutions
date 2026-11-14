class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        int digit = 0, number = x, sum = 0;

        while (number != 0)
        {
            digit = number % 10;
            sum += digit;
            number /= 10;
        }

        if (x % sum == 0)
        {
            return sum;
        }
        else
        {
            return -1;
        }
    }
};