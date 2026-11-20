class Solution {
public:
    string truncateSentence(string s, int k)
    {
        std::string sentence;
        int i = 0;
        for (; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                k--;
                if (k == 0)
                {
                    break;
                }
            }
            sentence.push_back(s[i]);
        }
        return sentence;
    }
};