class Solution {
public:
    int scoreOfString(string s) 
    {
        int ascii;
        int sum = 0;
        int prev = s[0];

        for (int i = 1; i < s.length(); i++)
        {
            ascii = s[i];
            
            if (ascii > prev)
            {
                sum += ascii - prev;
            }
            else
            {
                sum += prev - ascii;
            }
            prev = ascii;
        }   

        return sum;
    }
};