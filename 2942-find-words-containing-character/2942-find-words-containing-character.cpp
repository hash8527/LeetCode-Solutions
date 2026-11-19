class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector <int> indices;

        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];

            for (int j = 0; j < word.size(); j++)
            {
                if (word[j] == x)
                {
                    indices.push_back(i);
                    break;
                }
            }
        }
        return indices;
    }
};