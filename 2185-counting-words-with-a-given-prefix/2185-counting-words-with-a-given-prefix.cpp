class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int total = 0;
        bool status;
        for (int i = 0; i < words.size(); i++)
        {
            status = true;
            for (int j = 0; j < pref.size(); j++)
            {
                if (words[i][j] != pref[j])
                {
                    status = false;
                    break;
                }
            }
            if (status == true)
            {
                total++;
            }
        }
        return total;
    }
};