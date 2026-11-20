class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) 
    {
        std::string rev;
        int pairs = 0;

        for (int i = 0; i < words.size(); i++)
        {
            rev = "";
            for (int j = words[i].size() - 1; j >= 0; j--)
            {
                rev += words[i][j];
            }

            for (int j = i + 1; j < words.size(); j++)
            {
                if (rev == words[j])
                {
                    pairs++;
                }
            }
        }   
        return pairs;
    }
};