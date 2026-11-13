class Solution {
public:
    int hammingWeight(int n) 
    {
        double binary = 0, bits = 0, digit = 0;

        while (n != 0)
        {
            digit = n % 2;
            n /= 2;

            bits += digit;
        }
        return bits;
    }
};