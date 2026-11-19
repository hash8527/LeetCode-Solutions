class Solution {
public:
    string toLowerCase(string s) 
    {
        int ascii;
        for (int i = 0; i <= s.size(); i++)
        {
            ascii = s[i];
            if (ascii >= 65 and ascii <= 90)
            {
                ascii += 32;
            }
            s[i] = ascii;
        }
        return s;
    }
};