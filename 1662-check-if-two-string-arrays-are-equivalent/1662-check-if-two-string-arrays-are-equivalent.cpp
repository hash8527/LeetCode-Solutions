class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        std::string sentence1, sentence2;

        for (int i = 0; i < word1.size(); i++)
        {
            sentence1 += word1[i];
        }

        for (int i = 0; i < word2.size(); i++)
        {
            sentence2 += word2[i];
        }     

        if (sentence1 == sentence2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};