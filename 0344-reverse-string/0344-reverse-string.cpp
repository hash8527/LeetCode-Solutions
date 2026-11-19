class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int index;
        char temp;

        for (int i = 0; i < s.size() / 2; i++)
        {
            index = s.size() - 1 - i;
            temp = s[i];
            s[i] = s[index];
            s[index] = temp;
        }
    }
};